#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJCKMPBAFC;
class DLNCBOGAMFG_COMOEOCJNML;
class FHEGNOPNICH;
class HIIIBFIMIIE;
class JLJPFFILKIO;
class NJMDFFHEAJJ;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }

#define DLNCBOGAMFG_COMOEOCJNML_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18684960)
#define DLNCBOGAMFG_COMOEOCJNML_CTOR_OFFSET UNITYSDK_OFFSET(0x18687F80)

inline static constexpr unsigned int DLNCBOGAMFG_COMOEOCJNML_TypeDefinitionIndex = 67725;

	class DLNCBOGAMFG_COMOEOCJNML : public ::System::Object
	{
	public:
		::HIIIBFIMIIE* COOOMDKGODF; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NJMDFFHEAJJ*>* OCKHPCLHAFD; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::BPJCKMPBAFC*>* EHKHFECEOFK; // 0x20
		::JLJPFFILKIO* JLOOPPGEADG; // 0x28
		::System::Int32 FCFGHOHHJLE; // 0x30
		::System::Boolean IHOPKHOINBA; // 0x34
		::System::Boolean JOHBLNAKLMA; // 0x35
		::System::Byte _padding0[0x2];
		::System::UInt32 GJPPHJMHBPF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_COMOEOCJNML_CTOR_OFFSET))(this);
		}

		static ::DLNCBOGAMFG_COMOEOCJNML* BPLPBPMEODA(::FHEGNOPNICH* a1, ::System::Boolean a2)
		{
			return ((::DLNCBOGAMFG_COMOEOCJNML*(*)(::FHEGNOPNICH*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLNCBOGAMFG_COMOEOCJNML_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
