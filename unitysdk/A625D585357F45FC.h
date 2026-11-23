#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B1DF25493F639BCE;
class BB454B58A0E2FAB5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A625D585357F45FC_A4F0AD20FEC70599_OFFSET UNITYSDK_OFFSET(0x38B9980)
#define A625D585357F45FC_F89E000809C3CB5B_OFFSET UNITYSDK_OFFSET(0x38B9150)
#define A625D585357F45FC__CTOR_OFFSET UNITYSDK_OFFSET(0x38BA120)

inline static constexpr unsigned int A625D585357F45FC_TypeDefinitionIndex = 20288;

class A625D585357F45FC : public ::System::Object
{
public:
	::System::UInt64 AE1FA448AB938FEA; // 0x10
	::System::String* F5F10A35C1F58BBC; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* F81FE851DF5BF38F; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* FC57C9CA9A29E9FA; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* A2AAEC20573089F9; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* BC6A7636D978E987; // 0x38
	::System::Collections::Generic::List_1<::System::Object*>* B63BD3860ECEC3C6; // 0x40
	::System::Collections::Generic::List_1<::System::Object*>* F0197F7FD3D32E08; // 0x48
	::System::Collections::Generic::List_1<::System::Object*>* A4AC2B9990A5DBC3; // 0x50
	::System::String* AA0139375CDA5BEC; // 0x58
	::System::String* F60AE83CEFE8D66A; // 0x60
	::System::Collections::Generic::List_1<::System::Object*>* ACEBDD77BCF39C1E; // 0x68
	::System::Collections::Generic::List_1<::System::Object*>* BDA5B51FFD52BDD6; // 0x70

	::System::Void F89E000809C3CB5B(::BB454B58A0E2FAB5* E1A091262C10AC9B)
	{
		return ((::System::Void(*)(::PVOID, ::BB454B58A0E2FAB5*))((::PBYTE)hIl2Cpp + A625D585357F45FC_F89E000809C3CB5B_OFFSET))(this, E1A091262C10AC9B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A625D585357F45FC__CTOR_OFFSET))(this);
	}

	static ::A625D585357F45FC* A4F0AD20FEC70599(::B1DF25493F639BCE* BB4961BB636D3806, ::System::String* A5C299C395D3E1B2)
	{
		return ((::A625D585357F45FC*(*)(::B1DF25493F639BCE*, ::System::String*))((::PBYTE)hIl2Cpp + A625D585357F45FC_A4F0AD20FEC70599_OFFSET))(BB4961BB636D3806, A5C299C395D3E1B2);
	}
};
