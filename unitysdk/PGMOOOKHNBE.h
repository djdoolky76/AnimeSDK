#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define PGMOOOKHNBE_CTOR_OFFSET UNITYSDK_OFFSET(0xC229590)
#define PGMOOOKHNBE_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xC2295A0)

	class PGMOOOKHNBE : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* CCLGKDICBNH; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + PGMOOOKHNBE_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PGMOOOKHNBE_MNGGAOFNGIP_OFFSET))(this, a1);
		}

	};
