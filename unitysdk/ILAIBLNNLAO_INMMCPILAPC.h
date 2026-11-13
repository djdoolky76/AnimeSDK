#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapRotationInfo; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define ILAIBLNNLAO_INMMCPILAPC_CGFDCPDFBJN_OFFSET UNITYSDK_OFFSET(0x1B587790)
#define ILAIBLNNLAO_INMMCPILAPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B585250)
#define ILAIBLNNLAO_INMMCPILAPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B583C90)
#define ILAIBLNNLAO_INMMCPILAPC_GET_REGIONINDEX_OFFSET UNITYSDK_OFFSET(0x1B588510)
#define ILAIBLNNLAO_INMMCPILAPC_LCHCNDGGOMF_OFFSET UNITYSDK_OFFSET(0x1B584970)
#define ILAIBLNNLAO_INMMCPILAPC_NFEPONECGEG_OFFSET UNITYSDK_OFFSET(0x1B585760)
#define ILAIBLNNLAO_INMMCPILAPC_OPOEHBJODHH_OFFSET UNITYSDK_OFFSET(0x1B585990)

inline static constexpr unsigned int ILAIBLNNLAO_INMMCPILAPC_TypeDefinitionIndex = 62002;

	class ILAIBLNNLAO_INMMCPILAPC : public ::System::Object
	{
	public:
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x10
		::Il2CppArray<::System::Object*>* FANIBEFDIDA; // 0x18
		::System::UInt32 _RegionIndex_k__BackingField; // 0x20
		::System::UInt32 KGPLGNMOABE; // 0x24
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_INMMCPILAPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_INMMCPILAPC_DISPOSE_OFFSET))(this);
		}

		::System::Void NFEPONECGEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_INMMCPILAPC_NFEPONECGEG_OFFSET))(this);
		}

		::System::Void OPOEHBJODHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_INMMCPILAPC_OPOEHBJODHH_OFFSET))(this, a1);
		}

		::System::Void LCHCNDGGOMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_INMMCPILAPC_LCHCNDGGOMF_OFFSET))(this);
		}

		::System::Boolean CGFDCPDFBJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_INMMCPILAPC_CGFDCPDFBJN_OFFSET))(this);
		}

		::System::UInt32 get_RegionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_INMMCPILAPC_GET_REGIONINDEX_OFFSET))(this);
		}

	};
