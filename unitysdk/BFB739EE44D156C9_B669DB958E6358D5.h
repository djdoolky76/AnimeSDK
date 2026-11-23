#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define BFB739EE44D156C9_B669DB958E6358D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFB739EE44D156C9_B669DB958E6358D5_TypeDefinitionIndex = 17930;

class BFB739EE44D156C9_B669DB958E6358D5 : public ::System::Object
{
public:
	::UnityEngine::Mesh* F3E226E0ED8B265F; // 0x10
	::Il2CppArray<::UnityEngine::Material*>* F491D091799D071F; // 0x18
	::System::String* F097490D29643143; // 0x20
	::System::String* B0ECB0F594246D59; // 0x28
	::System::Int32 AE76F683C06154B6; // 0x30
	::System::Int32 F331E4BF907929B0; // 0x34
	::Il2CppArray<::System::UInt32>* BF8D7D046167A17E; // 0x38
	::Il2CppArray<::System::UInt32>* BBB3BF7C5EFA0BF0; // 0x40
	::System::Single B55F903A31B1AC25; // 0x48
	::System::Byte _padding0[0x4];
	::UnityEngine::Transform* B2A0B12783A9A3A2; // 0x50
	::System::Collections::Generic::List_1<::System::Object*>* FDE3CDE6065EBB42; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFB739EE44D156C9_B669DB958E6358D5__CTOR_OFFSET))(this);
	}
};
