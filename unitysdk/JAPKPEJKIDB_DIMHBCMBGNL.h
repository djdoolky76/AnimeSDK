#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DILIKOIGENM;
class JAPKPEJKIDB;

#define JAPKPEJKIDB_DIMHBCMBGNL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1655C970)
#define JAPKPEJKIDB_DIMHBCMBGNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1655CA40)

	class JAPKPEJKIDB_DIMHBCMBGNL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_DIMHBCMBGNL_CTOR_OFFSET))(this);
		}

		::JAPKPEJKIDB* BPLPBPMEODA(::DILIKOIGENM* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Boolean a6)
		{
			return ((::JAPKPEJKIDB*(*)(::PVOID, ::DILIKOIGENM*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_DIMHBCMBGNL_BPLPBPMEODA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
