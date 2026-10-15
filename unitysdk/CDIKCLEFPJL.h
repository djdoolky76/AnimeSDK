#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDEHCKDJFAF;
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDIKCLEFPJL_CTOR_OFFSET UNITYSDK_OFFSET(0xC76A730)
#define CDIKCLEFPJL_DCFAKMPMNFJ_OFFSET UNITYSDK_OFFSET(0xC76A770)
#define CDIKCLEFPJL_LKFNNODKIIN_OFFSET UNITYSDK_OFFSET(0xC76AB10)

inline static constexpr unsigned int CDIKCLEFPJL_TypeDefinitionIndex = 65593;

	class CDIKCLEFPJL : public ::System::Object
	{
	public:
		::EDEHCKDJFAF* FMMNHJPNINN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIKCLEFPJL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* DCFAKMPMNFJ(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CDIKCLEFPJL_DCFAKMPMNFJ_OFFSET))(this, a1);
		}

		::System::Int32 LKFNNODKIIN(::NHPAANINLPK* a1, ::NHPAANINLPK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::NHPAANINLPK*, ::NHPAANINLPK*))((::PBYTE)hIl2Cpp + CDIKCLEFPJL_LKFNNODKIIN_OFFSET))(this, a1, a2);
		}

	};
