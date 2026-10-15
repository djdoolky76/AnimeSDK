#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class ADBCFNJOHCM;
class EEAKIHIOHLD;
namespace System { class String; }

#define GFBDEBECAKP_COFCHICECPA_OFFSET UNITYSDK_OFFSET(0x159DD230)
#define GFBDEBECAKP_CTOR_OFFSET UNITYSDK_OFFSET(0x159DD5C0)
#define GFBDEBECAKP_FDDIHFABEHK_OFFSET UNITYSDK_OFFSET(0x159DD2F0)
#define GFBDEBECAKP_GEDAHFPJLCM_OFFSET UNITYSDK_OFFSET(0x159DD3A0)
#define GFBDEBECAKP_KCNHOLIGELO_OFFSET UNITYSDK_OFFSET(0x159DD4B0)
#define GFBDEBECAKP_KKGBACNMDLP_OFFSET UNITYSDK_OFFSET(0x159DD450)
#define GFBDEBECAKP_LELBIFGMAIJ_OFFSET UNITYSDK_OFFSET(0x159DD560)
#define GFBDEBECAKP_OBPHMILAJEF_OFFSET UNITYSDK_OFFSET(0x159DD290)
#define GFBDEBECAKP__ONBIND_OFFSET UNITYSDK_OFFSET(0x159DD1D0)

inline static constexpr unsigned int GFBDEBECAKP_TypeDefinitionIndex = 71451;

	class GFBDEBECAKP : public ::FMPCODLIOLG
	{
	public:
		::EEAKIHIOHLD* EDMCECKIBPB; // 0x60
		::ADBCFNJOHCM* ELFOFFMIENP; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBDEBECAKP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBDEBECAKP__ONBIND_OFFSET))(this);
		}

		::System::Void COFCHICECPA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GFBDEBECAKP_COFCHICECPA_OFFSET))(this, a1);
		}

		::System::Void OBPHMILAJEF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFBDEBECAKP_OBPHMILAJEF_OFFSET))(this, a1);
		}

		::System::Void FDDIHFABEHK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GFBDEBECAKP_FDDIHFABEHK_OFFSET))(this, a1);
		}

		::System::Void GEDAHFPJLCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFBDEBECAKP_GEDAHFPJLCM_OFFSET))(this);
		}

		::System::Void KKGBACNMDLP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFBDEBECAKP_KKGBACNMDLP_OFFSET))(this, a1);
		}

		::System::Void KCNHOLIGELO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFBDEBECAKP_KCNHOLIGELO_OFFSET))(this, a1);
		}

		::System::Void LELBIFGMAIJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GFBDEBECAKP_LELBIFGMAIJ_OFFSET))(this, a1);
		}

	};
