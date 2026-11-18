#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/BGJCOEKKMBG_JGBKPDHJMAD.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class AAILCDOANGE;
class GCAHFBFFBHE;
class HLFAEAFNCMN;
class IAAHGDFHCNB_EEMKELNEMJD;
class IAAHGDFHCNB_MGCPDNMHMCO;
class KKAEJOPKFMA;
class PJHEDPGGMIH;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAAHGDFHCNB_AIODLECADAD_1_OFFSET UNITYSDK_OFFSET(0x17A64290)
#define IAAHGDFHCNB_AIODLECADAD_OFFSET UNITYSDK_OFFSET(0x17A641F0)
#define IAAHGDFHCNB_BCGOIBFACFJ_OFFSET UNITYSDK_OFFSET(0x17A678C0)
#define IAAHGDFHCNB_BEPAMLNNMOF_OFFSET UNITYSDK_OFFSET(0x17A67790)
#define IAAHGDFHCNB_DBIAHFDCDOA_OFFSET UNITYSDK_OFFSET(0x17A68300)
#define IAAHGDFHCNB_DBMHAADNILO_OFFSET UNITYSDK_OFFSET(0x17A66A60)
#define IAAHGDFHCNB_DIPLFNLJBPH_OFFSET UNITYSDK_OFFSET(0x17A672A0)
#define IAAHGDFHCNB_DKLMGIBHGEG_OFFSET UNITYSDK_OFFSET(0x17A68690)
#define IAAHGDFHCNB_FHLNGICFGNJ_OFFSET UNITYSDK_OFFSET(0x17A64A70)
#define IAAHGDFHCNB_HHEPAMKPGIJ_OFFSET UNITYSDK_OFFSET(0x17A68230)
#define IAAHGDFHCNB_HOAAJJHINHN_OFFSET UNITYSDK_OFFSET(0x17A64B90)
#define IAAHGDFHCNB_INJDDAOPKLG_OFFSET UNITYSDK_OFFSET(0x17A670F0)
#define IAAHGDFHCNB_INKAGIFNOCJ_OFFSET UNITYSDK_OFFSET(0x17A66A50)
#define IAAHGDFHCNB_JAPAPDJNMGH_OFFSET UNITYSDK_OFFSET(0x17A66910)
#define IAAHGDFHCNB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17A67F00)
#define IAAHGDFHCNB_KBMJINMFIMD_OFFSET UNITYSDK_OFFSET(0x17A67FD0)
#define IAAHGDFHCNB_MAFLNKOLIGC_OFFSET UNITYSDK_OFFSET(0x17A64A80)
#define IAAHGDFHCNB_MBBMOMPLMMH_OFFSET UNITYSDK_OFFSET(0x17A66B90)
#define IAAHGDFHCNB_MFIHJCOFKPP_OFFSET UNITYSDK_OFFSET(0x17A67EF0)
#define IAAHGDFHCNB_MLKBPMJEHFK_OFFSET UNITYSDK_OFFSET(0x17A67780)
#define IAAHGDFHCNB_NHMAGEMKGLG_OFFSET UNITYSDK_OFFSET(0x17A66920)
#define IAAHGDFHCNB_OFLCKNKNPOC_OFFSET UNITYSDK_OFFSET(0x17A679F0)
#define IAAHGDFHCNB_OLIEHIIKEPC_OFFSET UNITYSDK_OFFSET(0x17A64940)
#define IAAHGDFHCNB_PLMFDHLHEDE_OFFSET UNITYSDK_OFFSET(0x17A68560)
#define IAAHGDFHCNB_PPEDNIMPDLC_OFFSET UNITYSDK_OFFSET(0x17A68100)
#define IAAHGDFHCNB_PPOOJKNJMCE_OFFSET UNITYSDK_OFFSET(0x17A68430)
#define IAAHGDFHCNB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17A63F20)
#define IAAHGDFHCNB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A63DF0)

inline static constexpr unsigned int IAAHGDFHCNB_TypeDefinitionIndex = 88126;

class IAAHGDFHCNB
{
public:
	::GCAHFBFFBHE* _AFPHAAMAODD_k__BackingField; // 0x28
	::HLFAEAFNCMN* _OAFPEGLNGHJ_k__BackingField; // 0x30
	::AAILCDOANGE* _AGCCPGHLDBD_k__BackingField; // 0x38
	::KKAEJOPKFMA* _FBJMKBKAOBF_k__BackingField; // 0x40
	::PJHEDPGGMIH* _EDMIGGKKAID_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::System::Boolean AIODLECADAD(::System::String* BCPPCELDALM, ::BGJCOEKKMBG_JGBKPDHJMAD& GCLAMFGEINL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::BGJCOEKKMBG_JGBKPDHJMAD&))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_AIODLECADAD_OFFSET))(this, BCPPCELDALM, GCLAMFGEINL);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* OLIEHIIKEPC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_OLIEHIIKEPC_OFFSET))(this);
	}

	::PJHEDPGGMIH* FHLNGICFGNJ()
	{
		return ((::PJHEDPGGMIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_FHLNGICFGNJ_OFFSET))(this);
	}

	::System::Boolean AIODLECADAD_1(::System::UInt32 BCPPCELDALM, ::BGJCOEKKMBG_JGBKPDHJMAD& GCLAMFGEINL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::BGJCOEKKMBG_JGBKPDHJMAD&))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_AIODLECADAD_1_OFFSET))(this, BCPPCELDALM, GCLAMFGEINL);
	}

	::KKAEJOPKFMA* JAPAPDJNMGH()
	{
		return ((::KKAEJOPKFMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_JAPAPDJNMGH_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* NHMAGEMKGLG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_NHMAGEMKGLG_OFFSET))(this);
	}

	::HLFAEAFNCMN* INKAGIFNOCJ()
	{
		return ((::HLFAEAFNCMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_INKAGIFNOCJ_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DBMHAADNILO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_DBMHAADNILO_OFFSET))(this);
	}

	::System::Void MBBMOMPLMMH(::System::String* GBHNKEFHDNB, ::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_MBBMOMPLMMH_OFFSET))(this, GBHNKEFHDNB, EBAJLMBGMFE, IBNICCGMILF);
	}

	::System::Void DIPLFNLJBPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_DIPLFNLJBPH_OFFSET))(this);
	}

	::GCAHFBFFBHE* MLKBPMJEHFK()
	{
		return ((::GCAHFBFFBHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_MLKBPMJEHFK_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* BEPAMLNNMOF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_BEPAMLNNMOF_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* BCGOIBFACFJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_BCGOIBFACFJ_OFFSET))(this);
	}

	static ::System::Void OFLCKNKNPOC(::IAAHGDFHCNB_MGCPDNMHMCO* NGGNKKAMDGH, ::System::String* DMKBGJMJELN, ::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::System::Void(*)(::IAAHGDFHCNB_MGCPDNMHMCO*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_OFLCKNKNPOC_OFFSET))(NGGNKKAMDGH, DMKBGJMJELN, AOADDGCDELC);
	}

	::AAILCDOANGE* MFIHJCOFKPP()
	{
		return ((::AAILCDOANGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_MFIHJCOFKPP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* KBMJINMFIMD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_KBMJINMFIMD_OFFSET))(this);
	}

	static ::System::Void INJDDAOPKLG(::IAAHGDFHCNB_MGCPDNMHMCO* NGGNKKAMDGH, ::System::String* DMKBGJMJELN, ::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::IAAHGDFHCNB_MGCPDNMHMCO*, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_INJDDAOPKLG_OFFSET))(NGGNKKAMDGH, DMKBGJMJELN, GHOLINNCJCE, IBNICCGMILF);
	}

	::System::Collections::Generic::List_1<::System::String*>* PPEDNIMPDLC()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_PPEDNIMPDLC_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* HHEPAMKPGIJ()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_HHEPAMKPGIJ_OFFSET))(this);
	}

	static ::System::String* MAFLNKOLIGC()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + IAAHGDFHCNB_MAFLNKOLIGC_OFFSET))();
	}

	static ::System::Void HOAAJJHINHN(::IAAHGDFHCNB_EEMKELNEMJD* NGGNKKAMDGH, ::Il2CppArray<::System::Byte>* AOADDGCDELC, ::System::String* GJKIKOMDNKG)
	{
		return ((::System::Void(*)(::IAAHGDFHCNB_EEMKELNEMJD*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_HOAAJJHINHN_OFFSET))(NGGNKKAMDGH, AOADDGCDELC, GJKIKOMDNKG);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* DBIAHFDCDOA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_DBIAHFDCDOA_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* PPOOJKNJMCE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_PPOOJKNJMCE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* PLMFDHLHEDE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_PLMFDHLHEDE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* DKLMGIBHGEG()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_DKLMGIBHGEG_OFFSET))(this);
	}
};
