#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class KFLOFDNCIPO;
namespace System { class String; }

#define KFLOFDNCIPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x17707DC0)
#define KFLOFDNCIPO_COMPILE_OFFSET UNITYSDK_OFFSET(0x17707840)
#define KFLOFDNCIPO_CTOR_OFFSET UNITYSDK_OFFSET(0x17707DB0)
#define KFLOFDNCIPO_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x17707780)
#define KFLOFDNCIPO_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x177077E0)
#define KFLOFDNCIPO_GET_TAG_OFFSET UNITYSDK_OFFSET(0x17707710)

inline static constexpr unsigned int KFLOFDNCIPO_TypeDefinitionIndex = 67035;

	class KFLOFDNCIPO : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Boolean ONFKPBBCNLA; // 0x10
		static ::KFLOFDNCIPO** StaticGet__Empty_k__BackingField()
		{
			return (::KFLOFDNCIPO**)UnitySDK::FromName("", "KFLOFDNCIPO")->GetStaticField(0x46D10);
		}

		static ::KFLOFDNCIPO** StaticGet__Default_k__BackingField()
		{
			return (::KFLOFDNCIPO**)UnitySDK::FromName("", "KFLOFDNCIPO")->GetStaticField(0x46D18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLOFDNCIPO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLOFDNCIPO_CCTOR_OFFSET))();
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLOFDNCIPO_GET_TAG_OFFSET))(this);
		}

		static ::KFLOFDNCIPO* get_Default()
		{
			return ((::KFLOFDNCIPO*(*)())((::PBYTE)hIl2Cpp + KFLOFDNCIPO_GET_DEFAULT_OFFSET))();
		}

		static ::KFLOFDNCIPO* get_Empty()
		{
			return ((::KFLOFDNCIPO*(*)())((::PBYTE)hIl2Cpp + KFLOFDNCIPO_GET_EMPTY_OFFSET))();
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + KFLOFDNCIPO_COMPILE_OFFSET))(this, a1, a2);
		}

	};
