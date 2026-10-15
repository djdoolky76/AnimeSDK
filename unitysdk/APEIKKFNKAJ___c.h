#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APEIKKFNKAJ;
namespace System { class Object; }

#define APEIKKFNKAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E647220)
#define APEIKKFNKAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E647260)
#define APEIKKFNKAJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E647270)

inline static constexpr unsigned int APEIKKFNKAJ___c_TypeDefinitionIndex = 27875;

	class APEIKKFNKAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APEIKKFNKAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ___C_CTOR_OFFSET))(this);
		}

		::APEIKKFNKAJ* __cctor_b__33_0()
		{
			return ((::APEIKKFNKAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + APEIKKFNKAJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
