#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKNKAGCBLMP;
class NBHCDAEKHGJ;
class OJDAEFPPHBI;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJDAEFPPHBI_BHCELCIIDJK_OFFSET UNITYSDK_OFFSET(0x194A9AC0)
#define OJDAEFPPHBI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x194A96C0)
#define OJDAEFPPHBI_CTOR_OFFSET UNITYSDK_OFFSET(0x194A97D0)
#define OJDAEFPPHBI_DCFFMFNBMEH_OFFSET UNITYSDK_OFFSET(0x194A9840)
#define OJDAEFPPHBI_JJLHMGKOHDG_OFFSET UNITYSDK_OFFSET(0x194A9A00)
#define OJDAEFPPHBI_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x194A9A40)
#define OJDAEFPPHBI_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x194A9A80)

inline static constexpr unsigned int OJDAEFPPHBI_TypeDefinitionIndex = 74084;

	class OJDAEFPPHBI : public ::System::Object
	{
	public:
		::System::String* GIDAEFPOGHI; // 0x10
		::JKNKAGCBLMP* PLAHHKFJMAH; // 0x18
		::System::Single KDGNDNJBIOE; // 0x20
		::System::Boolean OLCKOHDCOLG; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int64 AIKAPJELHNK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDAEFPPHBI_CTOR_OFFSET))(this);
		}

		static ::OJDAEFPPHBI* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>* a2)
		{
			return ((::OJDAEFPPHBI*(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>*))((::PBYTE)hIl2Cpp + OJDAEFPPHBI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean JJLHMGKOHDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDAEFPPHBI_JJLHMGKOHDG_OFFSET))(this);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDAEFPPHBI_JNACBACPDEM_OFFSET))(this);
		}

		::System::Int64 MNGGAOFNGIP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDAEFPPHBI_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Single BHCELCIIDJK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDAEFPPHBI_BHCELCIIDJK_OFFSET))(this);
		}

		::System::Void DCFFMFNBMEH(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>*))((::PBYTE)hIl2Cpp + OJDAEFPPHBI_DCFFMFNBMEH_OFFSET))(this, a1, a2);
		}

	};
