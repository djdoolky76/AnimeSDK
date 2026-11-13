#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCCDKHNGIPH;
namespace System { class Object; }

#define FCCDKHNGIPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89DE70)
#define FCCDKHNGIPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89DEA0)
#define FCCDKHNGIPH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F89DEB0)

inline static constexpr unsigned int FCCDKHNGIPH___c_TypeDefinitionIndex = 32248;

	class FCCDKHNGIPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCDKHNGIPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCDKHNGIPH___C_CTOR_OFFSET))(this);
		}

		::FCCDKHNGIPH* __cctor_b__48_0()
		{
			return ((::FCCDKHNGIPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCDKHNGIPH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
