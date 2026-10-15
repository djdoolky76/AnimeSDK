#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KIBHANONAPI;
class NAKCADNKBCK;
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKDCDEEGILL_CTOR_OFFSET UNITYSDK_OFFSET(0xF256BC0)
#define DKDCDEEGILL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF256C60)
#define DKDCDEEGILL_HOODGGALJEL_OFFSET UNITYSDK_OFFSET(0xF256CA0)
#define DKDCDEEGILL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xF2571A0)
#define DKDCDEEGILL_KMJFDCJIHOC_OFFSET UNITYSDK_OFFSET(0xF256DD0)
#define DKDCDEEGILL_LJKLOKHHIEC_OFFSET UNITYSDK_OFFSET(0xF256D50)

inline static constexpr unsigned int DKDCDEEGILL_TypeDefinitionIndex = 52098;

	class DKDCDEEGILL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NAKCADNKBCK*>* LAHJMFDLJPL; // 0x10
		::System::Collections::Generic::List_1<::KIBHANONAPI*>* LLEEKMAIHFO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDCDEEGILL_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDCDEEGILL_DISPOSE_OFFSET))(this);
		}

		::System::Void HOODGGALJEL(::System::UInt32 a1, ::NAKCADNKBCK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NAKCADNKBCK*))((::PBYTE)hIl2Cpp + DKDCDEEGILL_HOODGGALJEL_OFFSET))(this, a1, a2);
		}

		::System::Void LJKLOKHHIEC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKDCDEEGILL_LJKLOKHHIEC_OFFSET))(this, a1);
		}

		::System::Void KMJFDCJIHOC(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable* a3, ::System::Nullable* a4, ::Il2CppArray<::System::UInt32>* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Nullable*, ::System::Nullable*, ::Il2CppArray<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + DKDCDEEGILL_KMJFDCJIHOC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKDCDEEGILL_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
