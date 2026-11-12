#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class DNGMCNPJHBJ;
class EBJFHENGGDL;
class FMKEJLGKEMH;
namespace System { class String; }

#define EBJFHENGGDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x13AB1230)
#define EBJFHENGGDL_COMPILE_OFFSET UNITYSDK_OFFSET(0x13AB0AE0)
#define EBJFHENGGDL_CTOR_OFFSET UNITYSDK_OFFSET(0x13AB1220)
#define EBJFHENGGDL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x13AB0A70)
#define EBJFHENGGDL_JDBEGLPAPBE_OFFSET UNITYSDK_OFFSET(0x13AB0E90)

inline static constexpr unsigned int EBJFHENGGDL_TypeDefinitionIndex = 67031;

	class EBJFHENGGDL : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		static ::EBJFHENGGDL** StaticGet_HGLIFJGHADE()
		{
			return (::EBJFHENGGDL**)UnitySDK::FromName("", "EBJFHENGGDL")->GetStaticField(0x6B070);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJFHENGGDL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBJFHENGGDL_CCTOR_OFFSET))();
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJFHENGGDL_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + EBJFHENGGDL_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 JDBEGLPAPBE(::FMKEJLGKEMH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + EBJFHENGGDL_JDBEGLPAPBE_OFFSET))(this, a1);
		}

	};
