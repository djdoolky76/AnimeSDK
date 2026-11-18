#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CGEHELPGEGO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define KGHFIHGJGHC__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD67D0)

inline static constexpr unsigned int KGHFIHGJGHC_TypeDefinitionIndex = 41195;

class KGHFIHGJGHC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GGHBOMBJHJL; // 0x10
	::UnityEngine::Transform* HBMCAOLAANM; // 0x18
	::System::Collections::Generic::List_1<::CGEHELPGEGO*>* DMPENIJJANO; // 0x20
	::System::Boolean JINDOGEOCNM; // 0x28
	::System::Boolean GKHPAPEOPAJ; // 0x29
	::System::Byte _padding0[0x2];
	::System::Int32 NCBINMOJNAD; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHFIHGJGHC__CTOR_OFFSET))(this);
	}
};
