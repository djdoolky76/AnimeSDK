#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class ECBFFNKFPDA;
class PMGOFCCJEDE;
class POCFKFBIABM;

#define BHBNAJMBAHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x151E05C0)
#define BHBNAJMBAHO_CTOR_OFFSET UNITYSDK_OFFSET(0x151E05B0)
#define BHBNAJMBAHO_JAKBJKLLKKC_OFFSET UNITYSDK_OFFSET(0x151E0430)
#define BHBNAJMBAHO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x151E03E0)
#define BHBNAJMBAHO_LBGDGIOCPFK_OFFSET UNITYSDK_OFFSET(0x151E02D0)
#define BHBNAJMBAHO_OGDMBIDELJI_OFFSET UNITYSDK_OFFSET(0x151E0560)

inline static constexpr unsigned int BHBNAJMBAHO_TypeDefinitionIndex = 73495;

	class BHBNAJMBAHO : public ::System::Object
	{
	public:
		::POCFKFBIABM* ECEOOJALIMG; // 0x10
		static ::ECBFFNKFPDA** StaticGet_CEFLOIEBOKD()
		{
			return (::ECBFFNKFPDA**)UnitySDK::FromName("", "BHBNAJMBAHO")->GetStaticField(0x5F300);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBNAJMBAHO_CCTOR_OFFSET))();
		}

		::System::Void LBGDGIOCPFK(::PMGOFCCJEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMGOFCCJEDE*))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_LBGDGIOCPFK_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> JAKBJKLLKKC()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_JAKBJKLLKKC_OFFSET))(this);
		}

		::System::Boolean OGDMBIDELJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_OGDMBIDELJI_OFFSET))(this);
		}

	};
