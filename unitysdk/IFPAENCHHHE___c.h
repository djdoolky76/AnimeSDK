#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFPAENCHHHE;
namespace System { class Object; }

#define IFPAENCHHHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E647810)
#define IFPAENCHHHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E647850)
#define IFPAENCHHHE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E647860)

inline static constexpr unsigned int IFPAENCHHHE___c_TypeDefinitionIndex = 29024;

	class IFPAENCHHHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFPAENCHHHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE___C_CTOR_OFFSET))(this);
		}

		::IFPAENCHHHE* __cctor_b__28_0()
		{
			return ((::IFPAENCHHHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
