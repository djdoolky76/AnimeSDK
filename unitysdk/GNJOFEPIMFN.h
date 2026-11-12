#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GNJOFEPIMFN_ADPEKCIPMPB_OFFSET UNITYSDK_OFFSET(0x16A988D0)
#define GNJOFEPIMFN_COMPILE_OFFSET UNITYSDK_OFFSET(0x16A98260)
#define GNJOFEPIMFN_CTOR_OFFSET UNITYSDK_OFFSET(0x16A98250)
#define GNJOFEPIMFN_GET_TAG_OFFSET UNITYSDK_OFFSET(0x16A981E0)
#define GNJOFEPIMFN_PIGEMAHNLKC_OFFSET UNITYSDK_OFFSET(0x16A98B10)

inline static constexpr unsigned int GNJOFEPIMFN_TypeDefinitionIndex = 67042;

	class GNJOFEPIMFN : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>* BGCCJJCOPFP; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppArray<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + GNJOFEPIMFN_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJOFEPIMFN_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + GNJOFEPIMFN_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* PIGEMAHNLKC(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GNJOFEPIMFN_PIGEMAHNLKC_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean ADPEKCIPMPB(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GNJOFEPIMFN_ADPEKCIPMPB_OFFSET))(a1, a2, a3);
		}

	};
