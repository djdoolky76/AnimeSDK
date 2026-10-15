#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"
class PEKPNJMOGLC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OACFKPLKHPE_BLFCHHCEFBH_OFFSET UNITYSDK_OFFSET(0x1C574C50)
#define OACFKPLKHPE_CMDEKLDALHK_OFFSET UNITYSDK_OFFSET(0x1C574BD0)
#define OACFKPLKHPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C574CD0)

	class OACFKPLKHPE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OACFKPLKHPE_CTOR_OFFSET))(this);
		}

		static ::System::String* CMDEKLDALHK(::PEKPNJMOGLC* a1, ::System::UInt32 a2, ::RPG::Client::MechCraft::MechCraftPartType a3)
		{
			return ((::System::String*(*)(::PEKPNJMOGLC*, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + OACFKPLKHPE_CMDEKLDALHK_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* BLFCHHCEFBH(::PEKPNJMOGLC* a1, ::RPG::Client::MechCraft::MechCraftAttributeType a2, ::System::UInt32 a3, ::RPG::Client::MechCraft::MechCraftPartType a4)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PEKPNJMOGLC*, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + OACFKPLKHPE_BLFCHHCEFBH_OFFSET))(a1, a2, a3, a4);
		}

	};
