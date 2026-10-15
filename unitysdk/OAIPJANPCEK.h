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

#define OAIPJANPCEK_AIEPJGJPJGL_OFFSET UNITYSDK_OFFSET(0xBD26CC0)
#define OAIPJANPCEK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD26C00)
#define OAIPJANPCEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD26D20)
#define OAIPJANPCEK_GET_ISGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0xBD27290)
#define OAIPJANPCEK_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xBD272B0)
#define OAIPJANPCEK_HDNBBGFPNCA_OFFSET UNITYSDK_OFFSET(0xBD27230)
#define OAIPJANPCEK_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0xBD26C60)
#define OAIPJANPCEK_NKCCIPKOJDJ_OFFSET UNITYSDK_OFFSET(0xBD271C0)
#define OAIPJANPCEK_OCMLGEGEONE_OFFSET UNITYSDK_OFFSET(0xBD27310)
#define OAIPJANPCEK_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBD26C20)
#define OAIPJANPCEK_SET_ISGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0xBD272A0)

inline static constexpr unsigned int OAIPJANPCEK_TypeDefinitionIndex = 77761;

	class OAIPJANPCEK
	{
	public:
		::NJKFCOIBIOK* HJCMPMJHDEL; // 0x90
		::KCBJMBAHPKB* MOLOAJGOEOG; // 0x98
		::DODBAHAPCJA* EMCGBBFDFIM; // 0xA0
		::IDPIIKPHFJP* JLHNMFFGHEB; // 0xA8
		::GIDKJPFBOFG* GGLIEKAILAN; // 0xB0
		::FDPALAEIHPB* FKINCGODJEP; // 0xB8
		::NALOOJPFPIG* KMOPAAPMBOJ; // 0xC0
		::HLNOEGNOJHH* MLDIHOBKCHI; // 0xC8
		::EJFOOBLIKNH* LBNGGJHIFJF; // 0xD0
		::AOACJDGAMGL* BFCHLHOHLAO; // 0xD8
		::FPEICPLLKIP* MKFMHILGAGI; // 0xE0
		::NNKGNMJOELO* DNLFJKEHLPG; // 0xE8
		::RPG::Client::ChenLingFesGameInstance* HOADGOKCPDG; // 0xF0
		::GGBGCKBDJEH* CHPOLDKNEPK; // 0xF8
		::LEANJDBILDH* CMHJFHPODEA; // 0x100
		::System::Int32 CCNBLGIHHBP; // 0x108
		::System::Single ADIKIODKIBN; // 0x10C
		::System::Boolean _IsGamePause_k__BackingField; // 0x110
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
