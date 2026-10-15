#pragma once
#include "unitysdk/unitysdk.h"
class AOACJDGAMGL;
class DODBAHAPCJA;
class EJFOOBLIKNH;
class FDPALAEIHPB;
class FPEICPLLKIP;
class GGBGCKBDJEH;
class GIDKJPFBOFG;
class HDIAALCMDNG;
class HLNOEGNOJHH;
class IDPIIKPHFJP;
class KCBJMBAHPKB;
class LEANJDBILDH;
class NALOOJPFPIG;
class NJKFCOIBIOK;
class NNKGNMJOELO;
namespace RPG::Client { class ChenLingFesGameInstance; }

#define OAIPJANPCEK_AIEPJGJPJGL_OFFSET UNITYSDK_OFFSET(0xBD1FB70)
#define OAIPJANPCEK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1FAB0)
#define OAIPJANPCEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD1FBD0)
#define OAIPJANPCEK_GET_ISGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0xBD20140)
#define OAIPJANPCEK_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xBD20160)
#define OAIPJANPCEK_HDNBBGFPNCA_OFFSET UNITYSDK_OFFSET(0xBD200E0)
#define OAIPJANPCEK_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0xBD1FB10)
#define OAIPJANPCEK_NKCCIPKOJDJ_OFFSET UNITYSDK_OFFSET(0xBD20070)
#define OAIPJANPCEK_OCMLGEGEONE_OFFSET UNITYSDK_OFFSET(0xBD201C0)
#define OAIPJANPCEK_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBD1FAD0)
#define OAIPJANPCEK_SET_ISGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0xBD20150)

inline static constexpr unsigned int OAIPJANPCEK_TypeDefinitionIndex = 77760;

	class OAIPJANPCEK
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x90
		::GGBGCKBDJEH* CHPOLDKNEPK; // 0x98
		::DODBAHAPCJA* EMCGBBFDFIM; // 0xA0
		::IDPIIKPHFJP* JLHNMFFGHEB; // 0xA8
		::RPG::Client::ChenLingFesGameInstance* HOADGOKCPDG; // 0xB0
		::GIDKJPFBOFG* GGLIEKAILAN; // 0xB8
		::EJFOOBLIKNH* LBNGGJHIFJF; // 0xC0
		::NALOOJPFPIG* KMOPAAPMBOJ; // 0xC8
		::KCBJMBAHPKB* MOLOAJGOEOG; // 0xD0
		::HLNOEGNOJHH* MLDIHOBKCHI; // 0xD8
		::NJKFCOIBIOK* HJCMPMJHDEL; // 0xE0
		::NNKGNMJOELO* DNLFJKEHLPG; // 0xE8
		::FPEICPLLKIP* MKFMHILGAGI; // 0xF0
		::LEANJDBILDH* CMHJFHPODEA; // 0xF8
		::AOACJDGAMGL* BFCHLHOHLAO; // 0x100
		::System::Int32 CCNBLGIHHBP; // 0x108
		::System::Boolean _IsGamePause_k__BackingField; // 0x10C
		::System::Byte _padding0[0x3];
		::System::Single ADIKIODKIBN; // 0x110
		::System::Void _ctor(::FDPALAEIHPB* a1, ::RPG::Client::ChenLingFesGameInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::RPG::Client::ChenLingFesGameInstance*))((::PBYTE)hIl2Cpp + OAIPJANPCEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPJANPCEK_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Boolean MLEMMFLFMMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPJANPCEK_MLEMMFLFMMI_OFFSET))(this);
		}

		::System::Boolean AIEPJGJPJGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPJANPCEK_AIEPJGJPJGL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPJANPCEK_DISPOSE_OFFSET))(this);
		}

		::System::Void NKCCIPKOJDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAIPJANPCEK_NKCCIPKOJDJ_OFFSET))(this, a1);
		}

		::System::Single HDNBBGFPNCA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPJANPCEK_HDNBBGFPNCA_OFFSET))(this);
		}

		::System::Boolean get_IsGamePause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPJANPCEK_GET_ISGAMEPAUSE_OFFSET))(this);
		}

		::System::Void set_IsGamePause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAIPJANPCEK_SET_ISGAMEPAUSE_OFFSET))(this, a1);
		}

		::HDIAALCMDNG* GHDIJCNKKOM()
		{
			return ((::HDIAALCMDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPJANPCEK_GHDIJCNKKOM_OFFSET))(this);
		}

		::RPG::Client::ChenLingFesGameInstance* OCMLGEGEONE()
		{
			return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPJANPCEK_OCMLGEGEONE_OFFSET))(this);
		}

	};
