#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIFHJBBDKDC;
class AJEAHAODOHJ;
class FACKCCJFLKM;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class MainMissionRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OJEEIHNHLBF_FNOOOOGOCCF_OFFSET UNITYSDK_OFFSET(0xBEA6820)
#define OJEEIHNHLBF_GCGFAGLKLED_OFFSET UNITYSDK_OFFSET(0xBEA64B0)
#define OJEEIHNHLBF_GOKFKHNALJO_OFFSET UNITYSDK_OFFSET(0xBEA6DD0)
#define OJEEIHNHLBF_GOMMPEENAPP_OFFSET UNITYSDK_OFFSET(0xBEA7020)
#define OJEEIHNHLBF_KAPGIAGIOCL_OFFSET UNITYSDK_OFFSET(0xBEA68F0)
#define OJEEIHNHLBF_KOGHKKNLHKB_OFFSET UNITYSDK_OFFSET(0xBEA6E50)
#define OJEEIHNHLBF_LMBCPILOEEG_1_OFFSET UNITYSDK_OFFSET(0xBEA65B0)
#define OJEEIHNHLBF_LMBCPILOEEG_OFFSET UNITYSDK_OFFSET(0xBEA6750)

inline static constexpr unsigned int OJEEIHNHLBF_TypeDefinitionIndex = 62041;

	class OJEEIHNHLBF : public ::System::Object
	{
	public:
		static ::System::Boolean GCGFAGLKLED(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + OJEEIHNHLBF_GCGFAGLKLED_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LMBCPILOEEG(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OJEEIHNHLBF_LMBCPILOEEG_OFFSET))(a1);
		}

		static ::System::Int32 LMBCPILOEEG_1(::RPG::GameCore::MainMissionRow* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + OJEEIHNHLBF_LMBCPILOEEG_1_OFFSET))(a1);
		}

		static ::System::UInt32 FNOOOOGOCCF(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OJEEIHNHLBF_FNOOOOGOCCF_OFFSET))(a1);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>* KAPGIAGIOCL(::AIFHJBBDKDC* a1, ::AJEAHAODOHJ* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::AIFHJBBDKDC*, ::AJEAHAODOHJ*))((::PBYTE)hIl2Cpp + OJEEIHNHLBF_KAPGIAGIOCL_OFFSET))(a1, a2);
		}

		static ::System::Boolean GOKFKHNALJO(::AIFHJBBDKDC* a1, ::RPG::Client::MapDef* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::AIFHJBBDKDC*, ::RPG::Client::MapDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + OJEEIHNHLBF_GOKFKHNALJO_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 KOGHKKNLHKB(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::FACKCCJFLKM* a2)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + OJEEIHNHLBF_KOGHKKNLHKB_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GOMMPEENAPP(::AIFHJBBDKDC* a1, ::AJEAHAODOHJ* a2, ::FACKCCJFLKM* a3)
		{
			return ((::System::UInt32(*)(::AIFHJBBDKDC*, ::AJEAHAODOHJ*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + OJEEIHNHLBF_GOMMPEENAPP_OFFSET))(a1, a2, a3);
		}

	};
