#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NOLKEGGBDBP_BGALAOBEKND_OFFSET UNITYSDK_OFFSET(0x1C574840)
#define NOLKEGGBDBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5749C0)
#define NOLKEGGBDBP_DLLOIOFKMAH_OFFSET UNITYSDK_OFFSET(0x1C574900)
#define NOLKEGGBDBP_FKIHMELNKDA_OFFSET UNITYSDK_OFFSET(0x1C5747C0)
#define NOLKEGGBDBP_OBHHNAKALGL_OFFSET UNITYSDK_OFFSET(0x1C574720)

	class NOLKEGGBDBP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLKEGGBDBP_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftDirectionType>* OBHHNAKALGL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftDirectionType>*(*)())((::PBYTE)hIl2Cpp + NOLKEGGBDBP_OBHHNAKALGL_OFFSET))();
		}

		static ::UnityEngine::Vector2Int FKIHMELNKDA(::RPG::Client::MechCraft::MechCraftDirectionType a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::RPG::Client::MechCraft::MechCraftDirectionType, ::System::Int32))((::PBYTE)hIl2Cpp + NOLKEGGBDBP_FKIHMELNKDA_OFFSET))(a1, a2);
		}

		static ::System::Int32 BGALAOBEKND(::RPG::Client::MechCraft::MechCraftDirectionType a1)
		{
			return ((::System::Int32(*)(::RPG::Client::MechCraft::MechCraftDirectionType))((::PBYTE)hIl2Cpp + NOLKEGGBDBP_BGALAOBEKND_OFFSET))(a1);
		}

		static ::System::Int32 DLLOIOFKMAH(::RPG::Client::MechCraft::MechCraftDirectionType a1)
		{
			return ((::System::Int32(*)(::RPG::Client::MechCraft::MechCraftDirectionType))((::PBYTE)hIl2Cpp + NOLKEGGBDBP_DLLOIOFKMAH_OFFSET))(a1);
		}

	};
