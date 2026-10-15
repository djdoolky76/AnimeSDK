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

#define DLNCBOGAMFG_COMOEOCJNML_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF8B5D70)
#define DLNCBOGAMFG_COMOEOCJNML_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B9460)

	class DLNCBOGAMFG_COMOEOCJNML : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BPJCKMPBAFC*>* EHKHFECEOFK; // 0x10
		::HIIIBFIMIIE* COOOMDKGODF; // 0x18
		::JLJPFFILKIO* JLOOPPGEADG; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::NJMDFFHEAJJ*>* OCKHPCLHAFD; // 0x28
		::System::Boolean JOHBLNAKLMA; // 0x30
		::System::Boolean IHOPKHOINBA; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 FCFGHOHHJLE; // 0x34
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
