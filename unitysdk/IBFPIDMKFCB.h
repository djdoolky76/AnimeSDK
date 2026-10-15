#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBFPIDMKFCB;
class PBHJHNFMFDH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBFPIDMKFCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C523270)

inline static constexpr unsigned int IBFPIDMKFCB_TypeDefinitionIndex = 41872;

	class IBFPIDMKFCB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IBFPIDMKFCB*>* EGGCADJJJOD; // 0x10
		::PBHJHNFMFDH* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFPIDMKFCB_CTOR_OFFSET))(this);
		}

	};
