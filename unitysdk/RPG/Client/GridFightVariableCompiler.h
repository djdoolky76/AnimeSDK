#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DEPFPCICIIF;
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class LEOOACHIEOJ;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightVariableCompiler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_COMPILE_OFFSET UNITYSDK_OFFSET(0xDD08420)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_CREATEFORBATTLE_OFFSET UNITYSDK_OFFSET(0xDCE70F0)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_CREATEFORTRAIT_OFFSET UNITYSDK_OFFSET(0xDCE4FD0)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_CREATEFROMVALUEMAP_OFFSET UNITYSDK_OFFSET(0xDD08140)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_CTOR_OFFSET UNITYSDK_OFFSET(0xDD08400)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GETCHILDNODEQUALITY_OFFSET UNITYSDK_OFFSET(0xDD09810)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GETCHILDNODETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xDD09C40)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GETCHILDNODEVALUE_OFFSET UNITYSDK_OFFSET(0xDD09AA0)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xDCE7190)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GET_EMPTYINSTANCE_OFFSET UNITYSDK_OFFSET(0xDCE4F20)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GET_TAG_OFFSET UNITYSDK_OFFSET(0xDD08340)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_SETTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0xDD083B0)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETCHILDNODELEVEL_OFFSET UNITYSDK_OFFSET(0xDD09D00)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETCHILDNODEMILITARYRANK_OFFSET UNITYSDK_OFFSET(0xDD09D70)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETLEVELINDEX_OFFSET UNITYSDK_OFFSET(0xDD0A000)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETNEXTLEVELVALUE_OFFSET UNITYSDK_OFFSET(0xDD09420)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0xDD0A490)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__PARSECHILDREN_OFFSET UNITYSDK_OFFSET(0xDD08C80)
#define RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__PARSENONCHILDREN_OFFSET UNITYSDK_OFFSET(0xDD08700)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightVariableCompiler_TypeDefinitionIndex = 67071;

	class GridFightVariableCompiler : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::DEPFPCICIIF* _DefaultThresholds; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _Thresholds; // 0x18
		::LEOOACHIEOJ* _VariableProvider; // 0x20
		static ::RPG::Client::GridFightVariableCompiler** StaticGet__EmptyInstance()
		{
			return (::RPG::Client::GridFightVariableCompiler**)UnitySDK::FromName("RPG.Client", "GridFightVariableCompiler")->GetStaticField(0x16FC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GET_TAG_OFFSET))(this);
		}

		::System::Void SetThresholds(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_SETTHRESHOLDS_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightVariableCompiler* get_EmptyInstance()
		{
			return ((::RPG::Client::GridFightVariableCompiler*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GET_EMPTYINSTANCE_OFFSET))();
		}

		static ::RPG::Client::GridFightVariableCompiler* get_Default()
		{
			return ((::RPG::Client::GridFightVariableCompiler*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GET_DEFAULT_OFFSET))();
		}

		static ::RPG::Client::GridFightVariableCompiler* CreateFromValueMap(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::Client::GridFightVariableCompiler*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_CREATEFROMVALUEMAP_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightVariableCompiler* CreateForBattle(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::Client::GridFightVariableCompiler*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_CREATEFORBATTLE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightVariableCompiler* CreateForTrait(::RPG::Client::GridFightVariableCompiler* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* a2, ::RPG::Client::GridFightTrait* a3)
		{
			return ((::RPG::Client::GridFightVariableCompiler*(*)(::RPG::Client::GridFightVariableCompiler*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_CREATEFORTRAIT_OFFSET))(a1, a2, a3);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* _ParseNonChildren(::System::String* a1, ::System::Single a2, ::System::Single a3, ::FMKEJLGKEMH* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__PARSENONCHILDREN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* _ParseChildren(::System::String* a1, ::System::Single a2, ::System::Single a3, ::FMKEJLGKEMH* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__PARSECHILDREN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetChildNodeQuality(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GETCHILDNODEQUALITY_OFFSET))(this, a1, a2);
		}

		static ::System::String* GetChildNodeValue(::RPG::GameCore::FixPoint a1, ::FMKEJLGKEMH* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::FixPoint, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GETCHILDNODEVALUE_OFFSET))(a1, a2);
		}

		::System::String* GetChildNodeThreshold(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER_GETCHILDNODETHRESHOLD_OFFSET))(this, a1, a2);
		}

		::System::String* _GetChildNodeLevel(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETCHILDNODELEVEL_OFFSET))(this, a1, a2);
		}

		::System::String* _GetChildNodeMilitaryRank(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETCHILDNODEMILITARYRANK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* _GetThresholds(::System::String* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETTHRESHOLDS_OFFSET))(this, a1);
		}

		::System::Int32 _GetLevelIndex(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETLEVELINDEX_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint _GetNextLevelValue(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVARIABLECOMPILER__GETNEXTLEVELVALUE_OFFSET))(this, a1, a2);
		}

	};
}
