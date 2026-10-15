#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKLOMDCOKOC;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMPJPLJJGKA_CTOR_OFFSET UNITYSDK_OFFSET(0x158669B0)
#define FMPJPLJJGKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15866A50)
#define FMPJPLJJGKA_GIBGEHLANLO_OFFSET UNITYSDK_OFFSET(0x15866D40)
#define FMPJPLJJGKA_GLNGBPHPLLG_OFFSET UNITYSDK_OFFSET(0x15867770)
#define FMPJPLJJGKA_HIBDOBLHJAK_OFFSET UNITYSDK_OFFSET(0x158673C0)

inline static constexpr unsigned int FMPJPLJJGKA_TypeDefinitionIndex = 60990;

	class FMPJPLJJGKA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* OOPDOOECMFB; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* BBOBMJENMAL; // 0x18
		::System::Boolean DIMECBLLOGB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPJPLJJGKA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPJPLJJGKA_DISPOSE_OFFSET))(this);
		}

		::System::Void GIBGEHLANLO(::RPG::Client::MapDef* a1, ::PKLOMDCOKOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::PKLOMDCOKOC*))((::PBYTE)hIl2Cpp + FMPJPLJJGKA_GIBGEHLANLO_OFFSET))(this, a1, a2);
		}

		::System::Void HIBDOBLHJAK(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + FMPJPLJJGKA_HIBDOBLHJAK_OFFSET))(this, a1);
		}

		::System::Void GLNGBPHPLLG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMPJPLJJGKA_GLNGBPHPLLG_OFFSET))(this, a1);
		}

	};
