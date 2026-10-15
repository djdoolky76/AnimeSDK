#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOJOBHMEEIH;
class ELENICENJKP;
class EMHMFMNBJPG;
namespace System { class Action; }
namespace System { class String; }

#define GADFKIHDOPK_ADD_ONDIRTY_OFFSET UNITYSDK_OFFSET(0x159374E0)
#define GADFKIHDOPK_BINDNODE_OFFSET UNITYSDK_OFFSET(0x159376C0)
#define GADFKIHDOPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15937640)
#define GADFKIHDOPK_GETSTATE_OFFSET UNITYSDK_OFFSET(0x15937710)
#define GADFKIHDOPK_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x15937430)
#define GADFKIHDOPK_GET_KEY_OFFSET UNITYSDK_OFFSET(0x15937420)
#define GADFKIHDOPK_GET_NODE_OFFSET UNITYSDK_OFFSET(0x15937620)
#define GADFKIHDOPK_MAMHOAGMCHN_OFFSET UNITYSDK_OFFSET(0x15937760)
#define GADFKIHDOPK_MARKDIRTYSILENT_OFFSET UNITYSDK_OFFSET(0x15937AB0)
#define GADFKIHDOPK_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x159379B0)
#define GADFKIHDOPK_PJFFCDFECIG_OFFSET UNITYSDK_OFFSET(0x15937480)
#define GADFKIHDOPK_REMOVE_ONDIRTY_OFFSET UNITYSDK_OFFSET(0x15937580)
#define GADFKIHDOPK_SET_NODE_OFFSET UNITYSDK_OFFSET(0x15937630)
#define GADFKIHDOPK_SUBSCRIBEFROM_OFFSET UNITYSDK_OFFSET(0x159378E0)

inline static constexpr unsigned int GADFKIHDOPK_TypeDefinitionIndex = 79155;

	class GADFKIHDOPK : public ::System::Object
	{
	public:
		::EMHMFMNBJPG* DLNIGFGLPLJ; // 0x10
		::System::Action* KLKNOBJBOOP; // 0x18
		::ELENICENJKP* _Node_k__BackingField; // 0x20
		::System::String* _Key_k__BackingField; // 0x28
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GADFKIHDOPK_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFKIHDOPK_GET_KEY_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFKIHDOPK_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void PJFFCDFECIG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GADFKIHDOPK_PJFFCDFECIG_OFFSET))(this, a1);
		}

		::System::Void add_OnDirty(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GADFKIHDOPK_ADD_ONDIRTY_OFFSET))(this, a1);
		}

		::System::Void remove_OnDirty(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GADFKIHDOPK_REMOVE_ONDIRTY_OFFSET))(this, a1);
		}

		::ELENICENJKP* get_Node()
		{
			return ((::ELENICENJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFKIHDOPK_GET_NODE_OFFSET))(this);
		}

		::System::Void set_Node(::ELENICENJKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELENICENJKP*))((::PBYTE)hIl2Cpp + GADFKIHDOPK_SET_NODE_OFFSET))(this, a1);
		}

		::System::Void BindNode(::ELENICENJKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELENICENJKP*))((::PBYTE)hIl2Cpp + GADFKIHDOPK_BINDNODE_OFFSET))(this, a1);
		}

		::EMHMFMNBJPG* GetState()
		{
			return ((::EMHMFMNBJPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFKIHDOPK_GETSTATE_OFFSET))(this);
		}

		::System::Void SubscribeFrom(::BOJOBHMEEIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOJOBHMEEIH*))((::PBYTE)hIl2Cpp + GADFKIHDOPK_SUBSCRIBEFROM_OFFSET))(this, a1);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFKIHDOPK_MARKDIRTY_OFFSET))(this);
		}

		::System::Void MarkDirtySilent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFKIHDOPK_MARKDIRTYSILENT_OFFSET))(this);
		}

		::System::Boolean MAMHOAGMCHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFKIHDOPK_MAMHOAGMCHN_OFFSET))(this);
		}

	};
