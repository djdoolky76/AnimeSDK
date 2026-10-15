#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CJNOKELAIOA;
class DHIADEAGOKN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJNOKELAIOA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD7511F0)
#define CJNOKELAIOA_CTOR_OFFSET UNITYSDK_OFFSET(0xD751310)
#define CJNOKELAIOA_FJIIEDNKINC_OFFSET UNITYSDK_OFFSET(0xD750F30)
#define CJNOKELAIOA_JPOHHLKCKPC_OFFSET UNITYSDK_OFFSET(0xD751020)
#define CJNOKELAIOA_KEAMLGJNGOG_OFFSET UNITYSDK_OFFSET(0xD7510C0)

inline static constexpr unsigned int CJNOKELAIOA_TypeDefinitionIndex = 62369;

	class CJNOKELAIOA : public ::System::Object
	{
	public:
		::DHIADEAGOKN* AEOJEPKGNAC; // 0x10
		::System::UInt32 PDCMDACNCCN; // 0x18
		::UnityEngine::Vector2Int MBOMJGLEPMA; // 0x1C
		::System::UInt32 HKAHFHHICEN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNOKELAIOA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* FJIIEDNKINC()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNOKELAIOA_FJIIEDNKINC_OFFSET))(this);
		}

		::System::String* JPOHHLKCKPC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNOKELAIOA_JPOHHLKCKPC_OFFSET))(this);
		}

		::System::Int32 KEAMLGJNGOG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNOKELAIOA_KEAMLGJNGOG_OFFSET))(this);
		}

		static ::CJNOKELAIOA* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::CJNOKELAIOA*(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CJNOKELAIOA_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
