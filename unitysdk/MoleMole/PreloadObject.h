#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define MOLEMOLE_PRELOADOBJECT_GPJEOEJDPNH_OFFSET UNITYSDK_OFFSET(0x13A03CA0)
#define MOLEMOLE_PRELOADOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A03940)
#define MOLEMOLE_PRELOADOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A03930)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadObject_TypeDefinitionIndex = 51641;

	class PreloadObject : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_AssetTpeArray()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(PreloadObject_TypeDefinitionIndex)->GetStaticField(0x44C60);
		}
		::System::String* AssetPath; // 0x10
		::System::Int32 AssetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADOBJECT__CCTOR_OFFSET))();
		}

		::System::Type* GPJEOEJDPNH()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADOBJECT_GPJEOEJDPNH_OFFSET))(this);
		}
	};
}
