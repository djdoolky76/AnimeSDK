#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOMPCGKKCJE;
class KELONCAICPO_GMHECKFICFE;
namespace System { class String; }

#define KELONCAICPO_GMHECKFICFE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B5E17B0)
#define KELONCAICPO_GMHECKFICFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E1890)
#define KELONCAICPO_GMHECKFICFE_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B5E18A0)
#define KELONCAICPO_GMHECKFICFE_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x1B5E18C0)
#define KELONCAICPO_GMHECKFICFE_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B5E18B0)
#define KELONCAICPO_GMHECKFICFE_SET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x1B5E18D0)

inline static constexpr unsigned int KELONCAICPO_GMHECKFICFE_TypeDefinitionIndex = 73685;

	class KELONCAICPO_GMHECKFICFE : public ::System::Object
	{
	public:
		::System::String* _TextPath_k__BackingField; // 0x10
		::System::String* _PrefabPath_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_GMHECKFICFE_CTOR_OFFSET))(this);
		}

		static ::KELONCAICPO_GMHECKFICFE* BPLPBPMEODA(::GOMPCGKKCJE* a1)
		{
			return ((::KELONCAICPO_GMHECKFICFE*(*)(::GOMPCGKKCJE*))((::PBYTE)hIl2Cpp + KELONCAICPO_GMHECKFICFE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_GMHECKFICFE_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Void set_PrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KELONCAICPO_GMHECKFICFE_SET_PREFABPATH_OFFSET))(this, a1);
		}

		::System::String* get_TextPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_GMHECKFICFE_GET_TEXTPATH_OFFSET))(this);
		}

		::System::Void set_TextPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KELONCAICPO_GMHECKFICFE_SET_TEXTPATH_OFFSET))(this, a1);
		}

	};
