#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILHCHHNKIHI.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define MNKPCKFEOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA0120)
#define MNKPCKFEOMJ_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1FEEA330)
#define MNKPCKFEOMJ_FLUSH_OFFSET UNITYSDK_OFFSET(0x1FEE9C50)
#define MNKPCKFEOMJ_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1FEEA380)
#define MNKPCKFEOMJ_LOAD_OFFSET UNITYSDK_OFFSET(0x1FEE9660)

inline static constexpr unsigned int MNKPCKFEOMJ_TypeDefinitionIndex = 36244;

	class MNKPCKFEOMJ : public ::ILHCHHNKIHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKPCKFEOMJ_CTOR_OFFSET))(this);
		}

		::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + MNKPCKFEOMJ_LOAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + MNKPCKFEOMJ_FLUSH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNKPCKFEOMJ_DELETEKEY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPartialSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKPCKFEOMJ_GET_ISPARTIALSAVE_OFFSET))(this);
		}

	};
