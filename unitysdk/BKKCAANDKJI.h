#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLPPDCIBMIH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKKCAANDKJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56D400)

inline static constexpr unsigned int BKKCAANDKJI_TypeDefinitionIndex = 36445;

	class BKKCAANDKJI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* JIHJOPHPFHL; // 0x10
		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* AIIPGJNJJIC; // 0x18
		::System::UInt32 KKOCBDMBPBN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKCAANDKJI_CTOR_OFFSET))(this);
		}

	};
