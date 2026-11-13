#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class ADBCFNJOHCM;
class EEAKIHIOHLD;
namespace System { class String; }

#define GFBDEBECAKP_COFCHICECPA_OFFSET UNITYSDK_OFFSET(0x17CEA560)
#define GFBDEBECAKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B485630)
#define GFBDEBECAKP_FDDIHFABEHK_OFFSET UNITYSDK_OFFSET(0x17CEA620)
#define GFBDEBECAKP_GEDAHFPJLCM_OFFSET UNITYSDK_OFFSET(0x17CEA6D0)
#define GFBDEBECAKP_KCNHOLIGELO_OFFSET UNITYSDK_OFFSET(0x17CEA7E0)
#define GFBDEBECAKP_KKGBACNMDLP_OFFSET UNITYSDK_OFFSET(0x17CEA780)
#define GFBDEBECAKP_LELBIFGMAIJ_OFFSET UNITYSDK_OFFSET(0x1B4855D0)
#define GFBDEBECAKP_OBPHMILAJEF_OFFSET UNITYSDK_OFFSET(0x17CEA5C0)
#define GFBDEBECAKP__ONBIND_OFFSET UNITYSDK_OFFSET(0x17CEA500)

inline static constexpr unsigned int GFBDEBECAKP_TypeDefinitionIndex = 73433;

	class GFBDEBECAKP : public ::FMPCODLIOLG
	{
	public:
		::ADBCFNJOHCM* ELFOFFMIENP; // 0x60
		::EEAKIHIOHLD* EDMCECKIBPB; // 0x68
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
