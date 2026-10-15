#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define KGGNLCOGNPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB3E5900)
#define KGGNLCOGNPM_DELETEKEY_OFFSET UNITYSDK_OFFSET(0xB3E5880)
#define KGGNLCOGNPM_FLUSH_OFFSET UNITYSDK_OFFSET(0xB3E5790)
#define KGGNLCOGNPM_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0xB3E58F0)
#define KGGNLCOGNPM_LOAD_OFFSET UNITYSDK_OFFSET(0xB3E5700)

inline static constexpr unsigned int KGGNLCOGNPM_TypeDefinitionIndex = 59355;

	class KGGNLCOGNPM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGNLCOGNPM_CTOR_OFFSET))(this);
		}

		::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + KGGNLCOGNPM_LOAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + KGGNLCOGNPM_FLUSH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGGNLCOGNPM_DELETEKEY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPartialSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGNLCOGNPM_GET_ISPARTIALSAVE_OFFSET))(this);
		}

	};
