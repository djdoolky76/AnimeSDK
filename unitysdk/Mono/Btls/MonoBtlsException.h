#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EC2259717D713A4F/B860B22BB8F31BCE.h"
#include "unitysdk/System/Exception.h"

namespace System { class Object; }
namespace System { class String; }

#define MONO_BTLS_MONOBTLSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E8CAD0)
#define MONO_BTLS_MONOBTLSEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3E8CA00)
#define MONO_BTLS_MONOBTLSEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3E8C9A0)
#define MONO_BTLS_MONOBTLSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3E8CA50)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsException_TypeDefinitionIndex = 14967;

	class MonoBtlsException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* F1B74DA73881CF9B, ::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSEXCEPTION__CTOR_OFFSET))(this, F1B74DA73881CF9B, F0D3F87128A7C4CA);
		}

		::System::Void _ctor_1(::EC2259717D713A4F::B860B22BB8F31BCE E22BCD4736CD9DF9)
		{
			return ((::System::Void(*)(::PVOID, ::EC2259717D713A4F::B860B22BB8F31BCE))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSEXCEPTION__CTOR_1_OFFSET))(this, E22BCD4736CD9DF9);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSEXCEPTION__CTOR_2_OFFSET))(this);
		}

		::System::Void _ctor_3(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSEXCEPTION__CTOR_3_OFFSET))(this, B083BE7841B347C4);
		}
	};
}
