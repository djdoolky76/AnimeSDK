#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJJNEGIJGNN_OLIEOAJOLPD.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BAODFJECHJD;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJJNEGIJGNN_GGHFBIIEEIL_OFFSET UNITYSDK_OFFSET(0x115F2DF0)
#define BJJNEGIJGNN__CTOR_OFFSET UNITYSDK_OFFSET(0x115F2BC0)

inline static constexpr unsigned int BJJNEGIJGNN_TypeDefinitionIndex = 68919;

class BJJNEGIJGNN : public ::System::Object
{
public:
	::System::String* BGJNFPMNCEN; // 0x10
	::System::Object* GGNCOAPMEDN; // 0x18
	::System::Collections::Generic::List_1<::BAODFJECHJD*>* FKBEGOKGJNL; // 0x20
	::System::Collections::Generic::List_1<::System::Func_1<::UnityEngine::Vector3>*>* HDEGFAKJMGI; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* EKHHNMMBDAP; // 0x30
	::MoleMole::Config::GuidePoint_AutoGenStrategy CLDKCPKHOON; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EJNLEPHEFIA; // 0x88
	::System::Collections::Generic::List_1<::System::String*>* JEHPIBAPFGO; // 0x90
	::System::Collections::Generic::List_1<::System::Int32>* MGKNAFGGKAA; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* IDLCDOPMALL; // 0xA0
	::System::Collections::Generic::List_1<::System::String*>* GOGAAENBAKE; // 0xA8
	::System::Boolean EOADNMCDMAI; // 0xB0
	::System::Boolean BINODPBHFKO; // 0xB1
	::System::Byte _padding0[0x2];
	::BJJNEGIJGNN_OLIEOAJOLPD EFLLCMEOBBE; // 0xB4
	::System::Int32 PEMNMDHAEJN; // 0xB8
	::System::Single HLMLFHCLIGL; // 0xBC
	::System::Boolean MBJDMKCGOCK; // 0xC0
	::System::Boolean FDNKNHEIALJ; // 0xC1
	::System::Boolean MJFJCNIPPAN; // 0xC2
	::System::Byte _padding1[0x1];
	::System::Int32 EMHLCOLOCHG; // 0xC4
	::MoleMole::Config::CampType OLNAFBAENGH; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJNEGIJGNN__CTOR_OFFSET))(this);
	}

	::System::Boolean GGHFBIIEEIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJNEGIJGNN_GGHFBIIEEIL_OFFSET))(this);
	}
};
