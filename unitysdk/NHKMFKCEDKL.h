#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

class CLHDJDPALPI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHKMFKCEDKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1314C600)

inline static constexpr unsigned int NHKMFKCEDKL_TypeDefinitionIndex = 44688;

class NHKMFKCEDKL : public ::System::Object
{
public:
	::CLHDJDPALPI* JKKHMAMGBAK; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* IGKLHIODNLE; // 0x18
	::CLHDJDPALPI* EIPHPFDLGDN; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* JBHLNIHDBPI; // 0x28
	::MoleMole::Level::RatingType GCMNKOEHJFP; // 0x30
	::System::Int32 NACGJJKHEJE; // 0x34
	::System::Int32 BJGDHEAKPDC; // 0x38
	::System::Byte _padding0[0x4];
	::System::Int64 CIIPCCLOHLH; // 0x40
	::System::Int32 JIANPKKFCJC; // 0x48
	::System::Int32 ALNPHHPGJLM; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKMFKCEDKL__CTOR_OFFSET))(this);
	}
};
