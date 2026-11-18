#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPCPJMPJACA_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x11A303E0)
#define MPCPJMPJACA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11A30300)
#define MPCPJMPJACA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11A304E0)
#define MPCPJMPJACA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11A30450)
#define MPCPJMPJACA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11A302B0)
#define MPCPJMPJACA__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A30350)
#define MPCPJMPJACA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A303D0)

inline static constexpr unsigned int MPCPJMPJACA_TypeDefinitionIndex = 82445;

class MPCPJMPJACA : public ::MJHDNMKGLBJ
{
public:
	static ::System::Boolean* StaticGet_MNKMOLFMANJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MPCPJMPJACA_TypeDefinitionIndex)->GetStaticField(0xDEC0);
	}
	static ::System::Boolean* StaticGet_AGDMFBPJCMM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MPCPJMPJACA_TypeDefinitionIndex)->GetStaticField(0xDEC1);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0xC4; // 0x0
	::System::String* PLAAMNBJHFN; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DNAJHJNJOKJ; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* NNIMENGCEEG; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPCPJMPJACA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCPJMPJACA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCPJMPJACA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCPJMPJACA_GETCLASSID_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::System::String* LKLKNPHBNOC, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* JLKFFJEIMAP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KOACFEADJKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MPCPJMPJACA_GALGFCPKMGC_OFFSET))(this, LKLKNPHBNOC, JLKFFJEIMAP, KOACFEADJKN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCPJMPJACA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MPCPJMPJACA* JFDOOELFAOA()
	{
		return ((::MPCPJMPJACA*(*)())((::PBYTE)hIl2Cpp + MPCPJMPJACA_JFDOOELFAOA_OFFSET))();
	}
};
