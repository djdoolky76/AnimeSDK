#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A38F7047C011CF8B.h"
#include "unitysdk/F1D9C7A6C91AD71B.h"

class AEADE025F23A4E8D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F75CCB557B08CE9A_A79575C985C0DA90_OFFSET UNITYSDK_OFFSET(0x2445140)
#define F75CCB557B08CE9A_AB7FC29FAD61FA27_OFFSET UNITYSDK_OFFSET(0x2445210)
#define F75CCB557B08CE9A__CTOR_OFFSET UNITYSDK_OFFSET(0x2445470)

inline static constexpr unsigned int F75CCB557B08CE9A_TypeDefinitionIndex = 2435;

class F75CCB557B08CE9A : public ::A38F7047C011CF8B
{
public:
	::AEADE025F23A4E8D* EC291D7E3E3C8CC1; // 0x28

	::System::Boolean A79575C985C0DA90(::System::String* B823BD107ED98484, ::System::String*& ED117CA99F94B17D)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + F75CCB557B08CE9A_A79575C985C0DA90_OFFSET))(this, B823BD107ED98484, ED117CA99F94B17D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F75CCB557B08CE9A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::F1D9C7A6C91AD71B>* AB7FC29FAD61FA27()
	{
		return ((::System::Collections::Generic::List_1<::F1D9C7A6C91AD71B>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F75CCB557B08CE9A_AB7FC29FAD61FA27_OFFSET))(this);
	}
};
