#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBHFHIMMBLM_GBAPGBCFJOG;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBHFHIMMBLM_AMOAPEHHGKM_OFFSET UNITYSDK_OFFSET(0xBD466B0)
#define OBHFHIMMBLM_BCAOPBJBDMB_OFFSET UNITYSDK_OFFSET(0xBD46900)
#define OBHFHIMMBLM_BENNOFCJKPH_OFFSET UNITYSDK_OFFSET(0xBD46610)
#define OBHFHIMMBLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD45F20)
#define OBHFHIMMBLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD46B80)
#define OBHFHIMMBLM_EGLKDKFFLBN_OFFSET UNITYSDK_OFFSET(0xBD462F0)
#define OBHFHIMMBLM_FAPBFOGHOEG_OFFSET UNITYSDK_OFFSET(0xBD46A40)
#define OBHFHIMMBLM_FNAKHGBPHLE_OFFSET UNITYSDK_OFFSET(0xBD46810)
#define OBHFHIMMBLM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBD46460)
#define OBHFHIMMBLM_LBMPNDOEPDL_OFFSET UNITYSDK_OFFSET(0xBD46BD0)
#define OBHFHIMMBLM_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0xBD45FE0)

inline static constexpr unsigned int OBHFHIMMBLM_TypeDefinitionIndex = 57467;

	class OBHFHIMMBLM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IDGNBNECPDP; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* KHOMDENEOAE; // 0x18
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
		::System::Boolean MGLCBBJLHPO; // 0x28
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_CTOR_OFFSET))(this, a1);
		}

		::System::Void PLNCKDADELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_PLNCKDADELF_OFFSET))(this);
		}

		::System::Void EGLKDKFFLBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_EGLKDKFFLBN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BENNOFCJKPH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_BENNOFCJKPH_OFFSET))(this, a1);
		}

		::System::Void FNAKHGBPHLE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_FNAKHGBPHLE_OFFSET))(this, a1);
		}

		::System::Void BCAOPBJBDMB(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_BCAOPBJBDMB_OFFSET))(this, a1, a2);
		}

		::System::Void FAPBFOGHOEG(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_FAPBFOGHOEG_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_DISPOSE_OFFSET))(this);
		}

		::OBHFHIMMBLM_GBAPGBCFJOG* AMOAPEHHGKM(::System::String* a1)
		{
			return ((::OBHFHIMMBLM_GBAPGBCFJOG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_AMOAPEHHGKM_OFFSET))(this, a1);
		}

		::System::Int32 LBMPNDOEPDL(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_LBMPNDOEPDL_OFFSET))(this, a1);
		}

	};
