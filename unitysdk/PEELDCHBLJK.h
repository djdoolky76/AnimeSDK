#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianV2InitialFillMode.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/INBCAKDBHHE.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/NEJLIGKNHCC_KKGCNNMCFAP.h"
class BFJAILBMPCJ;
class KKPKHBMCDJC;
class KOJLADIPNKE;
class LAJCPEFEOPN;
class MHHBDDMJOII;
class MLFAGNKOOBJ;
class MNIADKMONBH;
class NEJLIGKNHCC;
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class LevelPedestrianV2MemberInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEELDCHBLJK_CDJMOJGDGFH_OFFSET UNITYSDK_OFFSET(0xC030FF0)
#define PEELDCHBLJK_CGHGKAMCHHC_OFFSET UNITYSDK_OFFSET(0xC02D1C0)
#define PEELDCHBLJK_CTOR_OFFSET UNITYSDK_OFFSET(0xC02D490)
#define PEELDCHBLJK_DBAJLMJJGAO_OFFSET UNITYSDK_OFFSET(0xC02E980)
#define PEELDCHBLJK_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xC02E620)
#define PEELDCHBLJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC02DC00)
#define PEELDCHBLJK_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xC02EC40)
#define PEELDCHBLJK_EEDFPNCIOAC_OFFSET UNITYSDK_OFFSET(0xC02F3D0)
#define PEELDCHBLJK_ENKPHKGECEJ_OFFSET UNITYSDK_OFFSET(0xC030F10)
#define PEELDCHBLJK_EOLMBBKDCNC_OFFSET UNITYSDK_OFFSET(0xC02EF90)
#define PEELDCHBLJK_FCFHNKMMCAD_OFFSET UNITYSDK_OFFSET(0xC0307A0)
#define PEELDCHBLJK_FFCPLNKPDLH_OFFSET UNITYSDK_OFFSET(0xC02F290)
#define PEELDCHBLJK_FIDDCMALNHK_OFFSET UNITYSDK_OFFSET(0xC030FA0)
#define PEELDCHBLJK_GCJOKIMJFJK_OFFSET UNITYSDK_OFFSET(0xC030240)
#define PEELDCHBLJK_GET_OVERRIDE_DISAPPEAR_MAX_DISTANCE_OFFSET UNITYSDK_OFFSET(0xC02D130)
#define PEELDCHBLJK_GET_RUNNINGTIME_OFFSET UNITYSDK_OFFSET(0xC02D470)
#define PEELDCHBLJK_GLDIDIEOIJO_OFFSET UNITYSDK_OFFSET(0xC0300F0)
#define PEELDCHBLJK_GMPFKIFCECG_OFFSET UNITYSDK_OFFSET(0xC02D150)
#define PEELDCHBLJK_GODJBAAKFDH_OFFSET UNITYSDK_OFFSET(0xC030F90)
#define PEELDCHBLJK_HAOHJKIDKAI_OFFSET UNITYSDK_OFFSET(0xC030020)
#define PEELDCHBLJK_HFFHIOFCCBG_OFFSET UNITYSDK_OFFSET(0xC0301A0)
#define PEELDCHBLJK_JAIBMONIGDE_OFFSET UNITYSDK_OFFSET(0xC030DE0)
#define PEELDCHBLJK_JMPKEJHHIII_1_OFFSET UNITYSDK_OFFSET(0xC030800)
#define PEELDCHBLJK_JMPKEJHHIII_OFFSET UNITYSDK_OFFSET(0xC02DEE0)
#define PEELDCHBLJK_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xC02EB40)
#define PEELDCHBLJK_LFEHLOODAKF_OFFSET UNITYSDK_OFFSET(0xC030EF0)
#define PEELDCHBLJK_LFFLCMOLCMD_OFFSET UNITYSDK_OFFSET(0xC031010)
#define PEELDCHBLJK_LFGPAMCBKAD_OFFSET UNITYSDK_OFFSET(0xC02E930)
#define PEELDCHBLJK_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xC02E5D0)
#define PEELDCHBLJK_MCLLFHPGCCI_OFFSET UNITYSDK_OFFSET(0xC030890)
#define PEELDCHBLJK_MKDMHCLGACB_OFFSET UNITYSDK_OFFSET(0xC02ED40)
#define PEELDCHBLJK_MOKKJIILBBN_OFFSET UNITYSDK_OFFSET(0xC02D310)
#define PEELDCHBLJK_NDJAKCFEELG_OFFSET UNITYSDK_OFFSET(0xC00D470)
#define PEELDCHBLJK_NEDOALNICDL_OFFSET UNITYSDK_OFFSET(0xC02F1C0)
#define PEELDCHBLJK_NIFKMBKIDHF_OFFSET UNITYSDK_OFFSET(0xC0301F0)
#define PEELDCHBLJK_NJKMBHJAJFA_OFFSET UNITYSDK_OFFSET(0xC02DFF0)
#define PEELDCHBLJK_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0xC030ED0)
#define PEELDCHBLJK_OIMGOMENDAN_OFFSET UNITYSDK_OFFSET(0xC02E0C0)
#define PEELDCHBLJK_OKOPNNKKMKO_OFFSET UNITYSDK_OFFSET(0xC02FDD0)
#define PEELDCHBLJK_PJJMPJPHLIE_OFFSET UNITYSDK_OFFSET(0xC02F310)
#define PEELDCHBLJK_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0xC031000)
#define PEELDCHBLJK_SET_OVERRIDE_DISAPPEAR_MAX_DISTANCE_OFFSET UNITYSDK_OFFSET(0xC02D140)
#define PEELDCHBLJK_SET_RUNNINGTIME_OFFSET UNITYSDK_OFFSET(0xC02D480)

inline static constexpr unsigned int PEELDCHBLJK_TypeDefinitionIndex = 69281;

	class PEELDCHBLJK : public ::System::Object
	{
	public:
		::NEJLIGKNHCC* BMEKCLBNHAO; // 0x10
		::System::Collections::Generic::Dictionary_2<::LAJCPEFEOPN*, ::System::Int64>* HLLMNCLAGGP; // 0x18
		::MHHBDDMJOII* LGEGKIKIPOB; // 0x20
		::System::Collections::Generic::List_1<::LAJCPEFEOPN*>* ECBHMEGFNPK; // 0x28
		::KOJLADIPNKE* LEIKBFCMNFD; // 0x30
		::KKPKHBMCDJC* KDIKLIEGCAO; // 0x38
		::System::Collections::Generic::HashSet_1<::LAJCPEFEOPN*>* CDNIAKIAHDL; // 0x40
		::BFJAILBMPCJ* MHAEBFAEFCG; // 0x48
		::RPG::GameCore::LevelPedestrianV2Info* IGHAHBNLIJA; // 0x50
		::System::Boolean MPECKIIKDGD; // 0x58
		::System::Byte _padding0[0x3];
		::System::Int32 LKOHNNNKNIK; // 0x5C
		::System::Int32 DDGIBNAEDNO; // 0x60
		::System::Single _RunningTime_k__BackingField; // 0x64
		::RPG::Client::EPedestrianV2InitialFillMode KIDBBABAJED; // 0x68
		::System::UInt32 EEIOOONCBLD; // 0x6C
		::System::Nullable_1<::System::Single> _OVERRIDE_DISAPPEAR_MAX_DISTANCE_k__BackingField; // 0x70
		::System::Void _ctor(::BFJAILBMPCJ* a1, ::RPG::GameCore::LevelPedestrianV2Info* a2, ::INBCAKDBHHE a3)
		{
			return ((::System::Void(*)(::PVOID, ::BFJAILBMPCJ*, ::RPG::GameCore::LevelPedestrianV2Info*, ::INBCAKDBHHE))((::PBYTE)hIl2Cpp + PEELDCHBLJK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::Single> get_OVERRIDE_DISAPPEAR_MAX_DISTANCE()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_GET_OVERRIDE_DISAPPEAR_MAX_DISTANCE_OFFSET))(this);
		}

		::System::Void set_OVERRIDE_DISAPPEAR_MAX_DISTANCE(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PEELDCHBLJK_SET_OVERRIDE_DISAPPEAR_MAX_DISTANCE_OFFSET))(this, a1);
		}

		::System::Single GMPFKIFCECG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_GMPFKIFCECG_OFFSET))(this);
		}

		::System::Single CGHGKAMCHHC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_CGHGKAMCHHC_OFFSET))(this);
		}

		::System::Single MOKKJIILBBN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_MOKKJIILBBN_OFFSET))(this);
		}

		::System::Single get_RunningTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_GET_RUNNINGTIME_OFFSET))(this);
		}

		::System::Void set_RunningTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEELDCHBLJK_SET_RUNNINGTIME_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_DISPOSE_OFFSET))(this);
		}

		::System::Void NJKMBHJAJFA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEELDCHBLJK_NJKMBHJAJFA_OFFSET))(this, a1);
		}

		::System::Void LKINOKFJPCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_LKINOKFJPCL_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEELDCHBLJK_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void MKDMHCLGACB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_MKDMHCLGACB_OFFSET))(this);
		}

		::System::Void EOLMBBKDCNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_EOLMBBKDCNC_OFFSET))(this);
		}

		::System::Int32 NEDOALNICDL(::RPG::Client::EPedestrianV2InitialFillMode a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EPedestrianV2InitialFillMode))((::PBYTE)hIl2Cpp + PEELDCHBLJK_NEDOALNICDL_OFFSET))(this, a1);
		}

		::System::Int32 FFCPLNKPDLH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_FFCPLNKPDLH_OFFSET))(this);
		}

		::System::Void PJJMPJPHLIE(::RPG::Client::EPedestrianV2InitialFillMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EPedestrianV2InitialFillMode))((::PBYTE)hIl2Cpp + PEELDCHBLJK_PJJMPJPHLIE_OFFSET))(this, a1);
		}

		::System::Void EEDFPNCIOAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_EEDFPNCIOAC_OFFSET))(this);
		}

		::System::Int32 GLDIDIEOIJO(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEELDCHBLJK_GLDIDIEOIJO_OFFSET))(this, a1);
		}

		::System::Void NIFKMBKIDHF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEELDCHBLJK_NIFKMBKIDHF_OFFSET))(this, a1);
		}

		::LAJCPEFEOPN* NDJAKCFEELG(::JOGBIBJLPJB a1, ::RPG::Client::EPedestrianV2MotionState a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Action_1<::LAJCPEFEOPN*>* a5, ::System::String* a6)
		{
			return ((::LAJCPEFEOPN*(*)(::PVOID, ::JOGBIBJLPJB, ::RPG::Client::EPedestrianV2MotionState, ::System::Int32, ::System::Boolean, ::System::Action_1<::LAJCPEFEOPN*>*, ::System::String*))((::PBYTE)hIl2Cpp + PEELDCHBLJK_NDJAKCFEELG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GCJOKIMJFJK(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEELDCHBLJK_GCJOKIMJFJK_OFFSET))(this, a1);
		}

		::LAJCPEFEOPN* OKOPNNKKMKO(::RPG::GameCore::LevelPedestrianV2MemberInfo* a1)
		{
			return ((::LAJCPEFEOPN*(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2MemberInfo*))((::PBYTE)hIl2Cpp + PEELDCHBLJK_OKOPNNKKMKO_OFFSET))(this, a1);
		}

		::System::Void OIMGOMENDAN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEELDCHBLJK_OIMGOMENDAN_OFFSET))(this, a1);
		}

		::System::Int32 MCLLFHPGCCI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_MCLLFHPGCCI_OFFSET))(this);
		}

		::System::Boolean FCFHNKMMCAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_FCFHNKMMCAD_OFFSET))(this);
		}

		::System::Void HAOHJKIDKAI(::LAJCPEFEOPN* a1, ::NEJLIGKNHCC_KKGCNNMCFAP a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::NEJLIGKNHCC_KKGCNNMCFAP))((::PBYTE)hIl2Cpp + PEELDCHBLJK_HAOHJKIDKAI_OFFSET))(this, a1, a2);
		}

		::System::Void JMPKEJHHIII(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + PEELDCHBLJK_JMPKEJHHIII_OFFSET))(this, a1);
		}

		::System::Void JMPKEJHHIII_1(::NEJLIGKNHCC_KKGCNNMCFAP a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEJLIGKNHCC_KKGCNNMCFAP))((::PBYTE)hIl2Cpp + PEELDCHBLJK_JMPKEJHHIII_1_OFFSET))(this, a1);
		}

		::System::Void DBAJLMJJGAO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEELDCHBLJK_DBAJLMJJGAO_OFFSET))(this, a1);
		}

		::System::Int32 JAIBMONIGDE(::MNIADKMONBH* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MNIADKMONBH*, ::System::Int32))((::PBYTE)hIl2Cpp + PEELDCHBLJK_JAIBMONIGDE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 OEIIDHFBKHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_OEIIDHFBKHG_OFFSET))(this);
		}

		::System::Boolean LFEHLOODAKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_LFEHLOODAKF_OFFSET))(this);
		}

		::System::Boolean ENKPHKGECEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_ENKPHKGECEJ_OFFSET))(this);
		}

		::MLFAGNKOOBJ* LFGPAMCBKAD()
		{
			return ((::MLFAGNKOOBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_LFGPAMCBKAD_OFFSET))(this);
		}

		::System::Int32 HFFHIOFCCBG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_HFFHIOFCCBG_OFFSET))(this);
		}

		::System::Int32 GODJBAAKFDH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_GODJBAAKFDH_OFFSET))(this);
		}

		::System::Boolean FIDDCMALNHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_FIDDCMALNHK_OFFSET))(this);
		}

		::KKPKHBMCDJC* CDJMOJGDGFH()
		{
			return ((::KKPKHBMCDJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_CDJMOJGDGFH_OFFSET))(this);
		}

		::MHHBDDMJOII* PLOGFHDCFJB()
		{
			return ((::MHHBDDMJOII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_PLOGFHDCFJB_OFFSET))(this);
		}

		::KOJLADIPNKE* LFFLCMOLCMD()
		{
			return ((::KOJLADIPNKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEELDCHBLJK_LFFLCMOLCMD_OFFSET))(this);
		}

	};
