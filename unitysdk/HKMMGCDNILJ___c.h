#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKMMGCDNILJ;
namespace System { class Object; }

#define HKMMGCDNILJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20171220)
#define HKMMGCDNILJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20171260)
#define HKMMGCDNILJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20171270)

inline static constexpr unsigned int HKMMGCDNILJ___c_TypeDefinitionIndex = 29122;

	class HKMMGCDNILJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKMMGCDNILJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ___C_CTOR_OFFSET))(this);
		}

		::HKMMGCDNILJ* __cctor_b__28_0()
		{
			return ((::HKMMGCDNILJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
