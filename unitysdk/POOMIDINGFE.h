#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO { class Stream; }

#define POOMIDINGFE_AGKKLDCKAMN_OFFSET UNITYSDK_OFFSET(0x1EC12540)
#define POOMIDINGFE_BHIJPDEGHII_OFFSET UNITYSDK_OFFSET(0x1EC128A0)
#define POOMIDINGFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC12ED0)
#define POOMIDINGFE_KGFDFIDBOOK_OFFSET UNITYSDK_OFFSET(0x1EC12710)
#define POOMIDINGFE_MIAKHCANIED_1_OFFSET UNITYSDK_OFFSET(0x1EC12A70)
#define POOMIDINGFE_MIAKHCANIED_OFFSET UNITYSDK_OFFSET(0x1EC12600)
#define POOMIDINGFE_NEPLJKJHIDD_OFFSET UNITYSDK_OFFSET(0x1EC12DC0)

inline static constexpr unsigned int POOMIDINGFE_TypeDefinitionIndex = 35282;

	class POOMIDINGFE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOMIDINGFE_CTOR_OFFSET))(this);
		}

		static ::System::Boolean AGKKLDCKAMN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + POOMIDINGFE_AGKKLDCKAMN_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* MIAKHCANIED(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + POOMIDINGFE_MIAKHCANIED_OFFSET))(a1);
		}

		static ::System::IO::Stream* KGFDFIDBOOK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + POOMIDINGFE_KGFDFIDBOOK_OFFSET))(a1, a2);
		}

		static ::System::IO::Stream* BHIJPDEGHII(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + POOMIDINGFE_BHIJPDEGHII_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* MIAKHCANIED_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + POOMIDINGFE_MIAKHCANIED_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NEPLJKJHIDD(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + POOMIDINGFE_NEPLJKJHIDD_OFFSET))(a1);
		}

	};
