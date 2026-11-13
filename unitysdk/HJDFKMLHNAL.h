#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDropZoneKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DFDJCIAMNBE;
class GLFKCPNKGFP;
class LPHINGPIEAJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define HJDFKMLHNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x181FA980)
#define HJDFKMLHNAL_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0x181FA990)
#define HJDFKMLHNAL_PFOOEFJNOIO_OFFSET UNITYSDK_OFFSET(0x181FAF20)

inline static constexpr unsigned int HJDFKMLHNAL_TypeDefinitionIndex = 79793;

	class HJDFKMLHNAL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind, ::GLFKCPNKGFP*>* FKAECECCGMK; // 0x10
		::DFDJCIAMNBE* ADEPOMCDGHD; // 0x18
		::System::Void _ctor(::DFDJCIAMNBE* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind, ::GLFKCPNKGFP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DFDJCIAMNBE*, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind, ::GLFKCPNKGFP*>*))((::PBYTE)hIl2Cpp + HJDFKMLHNAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPOFEKBLAIH(::LPHINGPIEAJ* a1, ::System::Int32 a2, ::System::UInt32 a3, ::UnityEngine::Vector2 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::Int32, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + HJDFKMLHNAL_NPOFEKBLAIH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean PFOOEFJNOIO(::LPHINGPIEAJ* a1, ::System::Boolean a2, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::Boolean, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind, ::System::Int32))((::PBYTE)hIl2Cpp + HJDFKMLHNAL_PFOOEFJNOIO_OFFSET))(this, a1, a2, a3, a4);
		}

	};
