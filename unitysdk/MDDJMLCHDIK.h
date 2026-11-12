#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class FHLLIHAHKHF;
class JNKMKNJACFP;
class OBJMDBDALGG;
namespace System { class Object; }
namespace System { class String; }

#define MDDJMLCHDIK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC14C940)
#define MDDJMLCHDIK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC14CB00)
#define MDDJMLCHDIK_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0xC14C230)
#define MDDJMLCHDIK_BNLPKDGPNGJ_OFFSET UNITYSDK_OFFSET(0xC14C2D0)
#define MDDJMLCHDIK_CELHEKOFLHF_OFFSET UNITYSDK_OFFSET(0xC14C0D0)
#define MDDJMLCHDIK_CHGJHJJKOJH_OFFSET UNITYSDK_OFFSET(0xC14C480)
#define MDDJMLCHDIK_CTOR_OFFSET UNITYSDK_OFFSET(0xC14BC10)
#define MDDJMLCHDIK_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0xC14C340)
#define MDDJMLCHDIK_GBGALIOKBHN_OFFSET UNITYSDK_OFFSET(0xC14C690)
#define MDDJMLCHDIK_HCEMCPOADFI_OFFSET UNITYSDK_OFFSET(0xC14C8B0)
#define MDDJMLCHDIK_HCGHKGHCPCA_OFFSET UNITYSDK_OFFSET(0xC14C790)
#define MDDJMLCHDIK_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xC14C3E0)
#define MDDJMLCHDIK_MFEIEBLNILG_OFFSET UNITYSDK_OFFSET(0xC14C820)
#define MDDJMLCHDIK_NIOPMOPLOFP_OFFSET UNITYSDK_OFFSET(0xC14C130)
#define MDDJMLCHDIK_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC14BC50)
#define MDDJMLCHDIK__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC14BCC0)
#define MDDJMLCHDIK__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC14C070)

inline static constexpr unsigned int MDDJMLCHDIK_TypeDefinitionIndex = 74277;

	class MDDJMLCHDIK : public ::RPG::Client::UIController
	{
	public:
		::JNKMKNJACFP* NAAIFFMPOIE; // 0x190
		::FHLLIHAHKHF* PLGCMJNOFEO; // 0x198
		::OBJMDBDALGG* ABKIJMNGDIO; // 0x1A0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void CELHEKOFLHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_CELHEKOFLHF_OFFSET))(this, a1);
		}

		::System::Void NIOPMOPLOFP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_NIOPMOPLOFP_OFFSET))(this, a1);
		}

		::System::Void BHBCLBBOPFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_BHBCLBBOPFL_OFFSET))(this, a1);
		}

		::System::Void EJPHKAJJCOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_EJPHKAJJCOG_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_LBPHINKONCH_OFFSET))(this, a1);
		}

		::System::Void BNLPKDGPNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_BNLPKDGPNGJ_OFFSET))(this);
		}

		::System::Boolean CHGJHJJKOJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_CHGJHJJKOJH_OFFSET))(this);
		}

		::System::Void GBGALIOKBHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_GBGALIOKBHN_OFFSET))(this, a1);
		}

		::System::Void HCGHKGHCPCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_HCGHKGHCPCA_OFFSET))(this, a1);
		}

		::System::Void MFEIEBLNILG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_MFEIEBLNILG_OFFSET))(this, a1);
		}

		::System::Void HCEMCPOADFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_HCEMCPOADFI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDJMLCHDIK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
