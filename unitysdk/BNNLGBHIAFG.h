#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class BNNLGBHIAFG;
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }

#define BNNLGBHIAFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A777B60)
#define BNNLGBHIAFG_COMPILE_OFFSET UNITYSDK_OFFSET(0x1A777100)
#define BNNLGBHIAFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A777B50)
#define BNNLGBHIAFG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1A777040)
#define BNNLGBHIAFG_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1A7770A0)
#define BNNLGBHIAFG_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A776FD0)
#define BNNLGBHIAFG_KKDMLPCFLCO_OFFSET UNITYSDK_OFFSET(0x1A777410)
#define BNNLGBHIAFG_NDCNAOCEFHE_OFFSET UNITYSDK_OFFSET(0x1A777AB0)

inline static constexpr unsigned int BNNLGBHIAFG_TypeDefinitionIndex = 67064;

	class BNNLGBHIAFG : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Boolean ONFKPBBCNLA; // 0x10
		static ::BNNLGBHIAFG** StaticGet__Default_k__BackingField()
		{
			return (::BNNLGBHIAFG**)UnitySDK::FromName("", "BNNLGBHIAFG")->GetStaticField(0x6F9E0);
		}

		static ::BNNLGBHIAFG** StaticGet__Empty_k__BackingField()
		{
			return (::BNNLGBHIAFG**)UnitySDK::FromName("", "BNNLGBHIAFG")->GetStaticField(0x6F9E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNLGBHIAFG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNNLGBHIAFG_CCTOR_OFFSET))();
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNLGBHIAFG_GET_TAG_OFFSET))(this);
		}

		static ::BNNLGBHIAFG* get_Default()
		{
			return ((::BNNLGBHIAFG*(*)())((::PBYTE)hIl2Cpp + BNNLGBHIAFG_GET_DEFAULT_OFFSET))();
		}

		static ::BNNLGBHIAFG* get_Empty()
		{
			return ((::BNNLGBHIAFG*(*)())((::PBYTE)hIl2Cpp + BNNLGBHIAFG_GET_EMPTY_OFFSET))();
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + BNNLGBHIAFG_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::Int32 KKDMLPCFLCO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNLGBHIAFG_KKDMLPCFLCO_OFFSET))(this);
		}

		::System::UInt32 NDCNAOCEFHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNLGBHIAFG_NDCNAOCEFHE_OFFSET))(this);
		}

	};
