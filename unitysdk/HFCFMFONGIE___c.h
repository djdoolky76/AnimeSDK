#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCFMFONGIE;
namespace System { class Object; }

#define HFCFMFONGIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88E890)
#define HFCFMFONGIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F88E8D0)
#define HFCFMFONGIE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F88E8E0)

inline static constexpr unsigned int HFCFMFONGIE___c_TypeDefinitionIndex = 30219;

	class HFCFMFONGIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCFMFONGIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE___C_CTOR_OFFSET))(this);
		}

		::HFCFMFONGIE* __cctor_b__23_0()
		{
			return ((::HFCFMFONGIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCFMFONGIE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
