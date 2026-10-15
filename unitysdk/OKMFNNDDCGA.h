#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class NEOCEOCDEAF;
namespace RPG::Client { class MockAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKMFNNDDCGA_AGLJAHOBLIO_OFFSET UNITYSDK_OFFSET(0xBEE7090)
#define OKMFNNDDCGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE75A0)
#define OKMFNNDDCGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE6CA0)
#define OKMFNNDDCGA_EOGOIGBMFFB_OFFSET UNITYSDK_OFFSET(0xBEE6D50)
#define OKMFNNDDCGA_FBHJPDAEDGI_OFFSET UNITYSDK_OFFSET(0xBEE7590)
#define OKMFNNDDCGA_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xBEE6C80)
#define OKMFNNDDCGA_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEE6C90)
#define OKMFNNDDCGA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBEE7050)
#define OKMFNNDDCGA_TICK_OFFSET UNITYSDK_OFFSET(0xBEE6CF0)
#define OKMFNNDDCGA__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBEE6FE0)

inline static constexpr unsigned int OKMFNNDDCGA_TypeDefinitionIndex = 57003;

	class OKMFNNDDCGA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NEOCEOCDEAF*>* INMNMAPFKFJ; // 0x18
		::RPG::Client::MockAnimator* NAHOHKAHBPK; // 0x20
		::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_CTOR_OFFSET))(this);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFNNDDCGA__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void AGLJAHOBLIO(::System::String* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_AGLJAHOBLIO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EOGOIGBMFFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_EOGOIGBMFFB_OFFSET))(this, a1);
		}

		::RPG::Client::MockAnimator* FBHJPDAEDGI()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMFNNDDCGA_FBHJPDAEDGI_OFFSET))(this);
		}

	};
