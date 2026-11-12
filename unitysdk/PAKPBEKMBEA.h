#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BindSwitchPhotoGraphFuncBtnUseType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FAHBNPMKDKG;
class PBDLKBEAHDL;
class POBGEFOCLJG;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAKPBEKMBEA_AOHLLEPAEFI_OFFSET UNITYSDK_OFFSET(0xC8D0700)
#define PAKPBEKMBEA_BFBCFLJFFNG_OFFSET UNITYSDK_OFFSET(0xC8CF840)
#define PAKPBEKMBEA_BGOBODKNEDO_OFFSET UNITYSDK_OFFSET(0xC8D0750)
#define PAKPBEKMBEA_BJIMBBMNAAD_OFFSET UNITYSDK_OFFSET(0xC8D3160)
#define PAKPBEKMBEA_BNIJMGHCDDI_OFFSET UNITYSDK_OFFSET(0xC8D1130)
#define PAKPBEKMBEA_CPGDKFIKNIO_OFFSET UNITYSDK_OFFSET(0xC8CF920)
#define PAKPBEKMBEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC8CFA20)
#define PAKPBEKMBEA_DHLPDEOLMFL_OFFSET UNITYSDK_OFFSET(0xC8D0500)
#define PAKPBEKMBEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8CFBD0)
#define PAKPBEKMBEA_DLOLFCBKDGM_OFFSET UNITYSDK_OFFSET(0xC8D0E80)
#define PAKPBEKMBEA_DNPAKPAPHLM_OFFSET UNITYSDK_OFFSET(0xC8D3660)
#define PAKPBEKMBEA_FNPADFABEKC_OFFSET UNITYSDK_OFFSET(0xC8D13C0)
#define PAKPBEKMBEA_GET_CURRENTACTIVEHANDLER_OFFSET UNITYSDK_OFFSET(0xC8D42D0)
#define PAKPBEKMBEA_GET_LASTPHOTORESULTSREPEATED_OFFSET UNITYSDK_OFFSET(0xC8D4310)
#define PAKPBEKMBEA_GET_LASTPHOTORESULTS_OFFSET UNITYSDK_OFFSET(0xC8D42F0)
#define PAKPBEKMBEA_GGGKPMJHGPJ_1_OFFSET UNITYSDK_OFFSET(0xC8D1920)
#define PAKPBEKMBEA_GGGKPMJHGPJ_OFFSET UNITYSDK_OFFSET(0xC8D1770)
#define PAKPBEKMBEA_GMAEINCIFCG_OFFSET UNITYSDK_OFFSET(0xC8D3610)
#define PAKPBEKMBEA_GNCAAMPLDGC_OFFSET UNITYSDK_OFFSET(0xC8D12C0)
#define PAKPBEKMBEA_HGEAKAIDNNF_OFFSET UNITYSDK_OFFSET(0xC8D1AF0)
#define PAKPBEKMBEA_HHEIHALHGPG_OFFSET UNITYSDK_OFFSET(0xC8D3A10)
#define PAKPBEKMBEA_HHNKJPMFJOA_OFFSET UNITYSDK_OFFSET(0xC8D0A20)
#define PAKPBEKMBEA_IJDHCCNIDKN_OFFSET UNITYSDK_OFFSET(0xC8CF8E0)
#define PAKPBEKMBEA_IMOPBLKBBKD_1_OFFSET UNITYSDK_OFFSET(0xC8D2420)
#define PAKPBEKMBEA_IMOPBLKBBKD_2_OFFSET UNITYSDK_OFFSET(0xC8D20D0)
#define PAKPBEKMBEA_IMOPBLKBBKD_OFFSET UNITYSDK_OFFSET(0xC8D1F20)
#define PAKPBEKMBEA_JALICAJPBLN_OFFSET UNITYSDK_OFFSET(0xC8D39A0)
#define PAKPBEKMBEA_JFICJAMHHLN_OFFSET UNITYSDK_OFFSET(0xC8D3530)
#define PAKPBEKMBEA_KACEHBFPCCE_OFFSET UNITYSDK_OFFSET(0xC8D1E00)
#define PAKPBEKMBEA_MAPIDGLJGAB_OFFSET UNITYSDK_OFFSET(0xC8CF9D0)
#define PAKPBEKMBEA_MJDHLOBPJNB_OFFSET UNITYSDK_OFFSET(0xC8D3360)
#define PAKPBEKMBEA_NBKCNAONNFF_OFFSET UNITYSDK_OFFSET(0xC8D08E0)
#define PAKPBEKMBEA_NDABLHAADOB_OFFSET UNITYSDK_OFFSET(0xC8D36C0)
#define PAKPBEKMBEA_NLNJCKNNGPJ_OFFSET UNITYSDK_OFFSET(0xC8D2F90)
#define PAKPBEKMBEA_OKPMOLPDBKL_OFFSET UNITYSDK_OFFSET(0xC8CF980)
#define PAKPBEKMBEA_PDNJNEFMMHA_OFFSET UNITYSDK_OFFSET(0xC8D0630)
#define PAKPBEKMBEA_PMHFOJLJPDA_OFFSET UNITYSDK_OFFSET(0xC8CF890)
#define PAKPBEKMBEA_SET_CURRENTACTIVEHANDLER_OFFSET UNITYSDK_OFFSET(0xC8D42E0)
#define PAKPBEKMBEA_SET_LASTPHOTORESULTSREPEATED_OFFSET UNITYSDK_OFFSET(0xC8D4320)
#define PAKPBEKMBEA_SET_LASTPHOTORESULTS_OFFSET UNITYSDK_OFFSET(0xC8D4300)
#define PAKPBEKMBEA_TICK_OFFSET UNITYSDK_OFFSET(0xC8D02B0)

inline static constexpr unsigned int PAKPBEKMBEA_TypeDefinitionIndex = 71405;

	class PAKPBEKMBEA : public ::System::Object
	{
	public:
		::RPG::Client::PhotoGraphSystem* CLIAIMPENOO; // 0x10
		::PBDLKBEAHDL* _CurrentActiveHandler_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* ALEIOEBJMAD; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::PBDLKBEAHDL*>* KGHEEMAKNGK; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _LastPhotoResultsRepeated_k__BackingField; // 0x30
		::POBGEFOCLJG* GJLLLAENMPM; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _LastPhotoResults_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::PBDLKBEAHDL*>* JLAGJIBDNOK; // 0x48
		::System::Int32 IDEOPKFILNF; // 0x50
		::System::Void _ctor(::RPG::Client::PhotoGraphSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean BFBCFLJFFNG(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1, ::RPG::GameCore::PhotoGraphFuncBtnType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType, ::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_BFBCFLJFFNG_OFFSET))(a1, a2);
		}

		static ::System::Boolean PMHFOJLJPDA(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_PMHFOJLJPDA_OFFSET))(a1);
		}

		static ::System::Boolean IJDHCCNIDKN(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_IJDHCCNIDKN_OFFSET))(a1);
		}

		static ::System::Boolean CPGDKFIKNIO(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_CPGDKFIKNIO_OFFSET))(a1);
		}

		static ::RPG::GameCore::PhotoGraphAimIdentifyType OKPMOLPDBKL(::RPG::GameCore::PhotoGraphFuncBtnType a1)
		{
			return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_OKPMOLPDBKL_OFFSET))(a1);
		}

		static ::RPG::GameCore::PhotoGraphModeType MAPIDGLJGAB(::RPG::GameCore::PhotoGraphFuncBtnType a1)
		{
			return ((::RPG::GameCore::PhotoGraphModeType(*)(::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_MAPIDGLJGAB_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_TICK_OFFSET))(this, a1);
		}

		::System::Void PDNJNEFMMHA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_PDNJNEFMMHA_OFFSET))(this, a1);
		}

		::System::Void AOHLLEPAEFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_AOHLLEPAEFI_OFFSET))(this);
		}

		::System::Int32 BGOBODKNEDO(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_BGOBODKNEDO_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 DLOLFCBKDGM(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_DLOLFCBKDGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FNPADFABEKC(::System::String* a1, ::RPG::GameCore::StringHash a2, ::RPG::GameCore::PhotoGraphTargetSize* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::StringHash, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_FNPADFABEKC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GGGKPMJHGPJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_GGGKPMJHGPJ_OFFSET))(this, a1);
		}

		::System::Void GGGKPMJHGPJ_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_GGGKPMJHGPJ_1_OFFSET))(this, a1);
		}

		::System::Void HGEAKAIDNNF(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_HGEAKAIDNNF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KACEHBFPCCE(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_KACEHBFPCCE_OFFSET))(this, a1, a2);
		}

		::System::Void IMOPBLKBBKD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_IMOPBLKBBKD_OFFSET))(this, a1);
		}

		::System::Void IMOPBLKBBKD_1(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_IMOPBLKBBKD_1_OFFSET))(this, a1);
		}

		::System::Void IMOPBLKBBKD_2(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_IMOPBLKBBKD_2_OFFSET))(this, a1, a2);
		}

		::System::Void BJIMBBMNAAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_BJIMBBMNAAD_OFFSET))(this, a1);
		}

		::System::Void MJDHLOBPJNB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_MJDHLOBPJNB_OFFSET))(this, a1);
		}

		::System::Boolean JFICJAMHHLN(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_JFICJAMHHLN_OFFSET))(this, a1);
		}

		::System::Void GMAEINCIFCG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_GMAEINCIFCG_OFFSET))(this, a1);
		}

		::System::Int32 DNPAKPAPHLM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_DNPAKPAPHLM_OFFSET))(this);
		}

		::RPG::Client::TextID NDABLHAADOB()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_NDABLHAADOB_OFFSET))(this);
		}

		::System::Void DHLPDEOLMFL(::PBDLKBEAHDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBDLKBEAHDL*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_DHLPDEOLMFL_OFFSET))(this, a1);
		}

		::PBDLKBEAHDL* JALICAJPBLN(::System::String* a1)
		{
			return ((::PBDLKBEAHDL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_JALICAJPBLN_OFFSET))(this, a1);
		}

		::PBDLKBEAHDL* HHEIHALHGPG(::System::String* a1)
		{
			return ((::PBDLKBEAHDL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_HHEIHALHGPG_OFFSET))(this, a1);
		}

		::FAHBNPMKDKG* GNCAAMPLDGC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::FAHBNPMKDKG*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_GNCAAMPLDGC_OFFSET))(this, a1, a2);
		}

		::System::Void BNIJMGHCDDI(::PBDLKBEAHDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBDLKBEAHDL*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_BNIJMGHCDDI_OFFSET))(this, a1);
		}

		::PBDLKBEAHDL* NBKCNAONNFF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::PBDLKBEAHDL*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_NBKCNAONNFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HHNKJPMFJOA(::PBDLKBEAHDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBDLKBEAHDL*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_HHNKJPMFJOA_OFFSET))(this, a1);
		}

		::System::Void NLNJCKNNGPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_NLNJCKNNGPJ_OFFSET))(this, a1);
		}

		::PBDLKBEAHDL* get_CurrentActiveHandler()
		{
			return ((::PBDLKBEAHDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_GET_CURRENTACTIVEHANDLER_OFFSET))(this);
		}

		::System::Void set_CurrentActiveHandler(::PBDLKBEAHDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBDLKBEAHDL*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_SET_CURRENTACTIVEHANDLER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_LastPhotoResults()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_GET_LASTPHOTORESULTS_OFFSET))(this);
		}

		::System::Void set_LastPhotoResults(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_SET_LASTPHOTORESULTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_LastPhotoResultsRepeated()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_GET_LASTPHOTORESULTSREPEATED_OFFSET))(this);
		}

		::System::Void set_LastPhotoResultsRepeated(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + PAKPBEKMBEA_SET_LASTPHOTORESULTSREPEATED_OFFSET))(this, a1);
		}

	};
