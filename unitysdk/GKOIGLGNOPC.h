#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RtLevelFloorInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKOIGLGNOPC_HNNIBLANNFG_OFFSET UNITYSDK_OFFSET(0x15A9CBA0)
#define GKOIGLGNOPC_IOLMFJIGDCH_OFFSET UNITYSDK_OFFSET(0x15A9CDF0)
#define GKOIGLGNOPC_MPEAGPKGCHF_1_OFFSET UNITYSDK_OFFSET(0x15A9CD70)
#define GKOIGLGNOPC_MPEAGPKGCHF_OFFSET UNITYSDK_OFFSET(0x15A9CC50)

inline static constexpr unsigned int GKOIGLGNOPC_TypeDefinitionIndex = 62209;

	class GKOIGLGNOPC : public ::System::Object
	{
	public:
		static ::System::String* HNNIBLANNFG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GKOIGLGNOPC_HNNIBLANNFG_OFFSET))(a1, a2);
		}

		static ::System::String* MPEAGPKGCHF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GKOIGLGNOPC_MPEAGPKGCHF_OFFSET))(a1, a2);
		}

		static ::System::String* MPEAGPKGCHF_1(::RPG::GameCore::RtLevelFloorInfo* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::RtLevelFloorInfo*))((::PBYTE)hIl2Cpp + GKOIGLGNOPC_MPEAGPKGCHF_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* IOLMFJIGDCH(::RPG::GameCore::RtLevelFloorInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::RPG::GameCore::RtLevelFloorInfo*))((::PBYTE)hIl2Cpp + GKOIGLGNOPC_IOLMFJIGDCH_OFFSET))(a1);
		}

	};
