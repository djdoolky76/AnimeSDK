#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EHKBIMEMOCP;
class HGAJKHIMKJP;
class PJBCFAALBFG;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define DBGADHDMCDL_CAONFJONJDI_1_OFFSET UNITYSDK_OFFSET(0x193F7210)
#define DBGADHDMCDL_CAONFJONJDI_2_OFFSET UNITYSDK_OFFSET(0x193F6E40)
#define DBGADHDMCDL_CAONFJONJDI_3_OFFSET UNITYSDK_OFFSET(0x193F7350)
#define DBGADHDMCDL_CAONFJONJDI_OFFSET UNITYSDK_OFFSET(0x193F6D80)
#define DBGADHDMCDL_HFDGJDNFCOC_OFFSET UNITYSDK_OFFSET(0x193F7410)

inline static constexpr unsigned int DBGADHDMCDL_TypeDefinitionIndex = 59411;

class DBGADHDMCDL : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* CAONFJONJDI(::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>* AOIDJPEIDLE)
	{
		return ((::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + DBGADHDMCDL_CAONFJONJDI_OFFSET))(AOIDJPEIDLE);
	}

	static ::System::Void CAONFJONJDI_1(::EHKBIMEMOCP* AOIDJPEIDLE, ::System::Collections::Generic::IList_1<::HGAJKHIMKJP*>*& DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::EHKBIMEMOCP*, ::System::Collections::Generic::IList_1<::HGAJKHIMKJP*>*&))((::PBYTE)hIl2Cpp + DBGADHDMCDL_CAONFJONJDI_1_OFFSET))(AOIDJPEIDLE, DJLOKMMLFJC);
	}

	static ::System::Void CAONFJONJDI_2(::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>* AOIDJPEIDLE, ::System::Collections::Generic::IList_1<::HGAJKHIMKJP*>*& DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::IList_1<::HGAJKHIMKJP*>*&))((::PBYTE)hIl2Cpp + DBGADHDMCDL_CAONFJONJDI_2_OFFSET))(AOIDJPEIDLE, DJLOKMMLFJC);
	}

	static ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* CAONFJONJDI_3(::EHKBIMEMOCP* AOIDJPEIDLE)
	{
		return ((::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*(*)(::EHKBIMEMOCP*))((::PBYTE)hIl2Cpp + DBGADHDMCDL_CAONFJONJDI_3_OFFSET))(AOIDJPEIDLE);
	}

	static ::PJBCFAALBFG* HFDGJDNFCOC(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::PJBCFAALBFG*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DBGADHDMCDL_HFDGJDNFCOC_OFFSET))(HFMHOELKCAJ);
	}
};
