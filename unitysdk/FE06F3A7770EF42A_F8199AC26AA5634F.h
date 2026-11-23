#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BC98B5DEA770214F.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
class FE06F3A7770EF42A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FE06F3A7770EF42A_F8199AC26AA5634F_A3B674B223C6A490_OFFSET UNITYSDK_OFFSET(0x1F3C900)
#define FE06F3A7770EF42A_F8199AC26AA5634F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE06F3A7770EF42A_F8199AC26AA5634F_TypeDefinitionIndex = 7655;

class FE06F3A7770EF42A_F8199AC26AA5634F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BC98B5DEA770214F>* A46ED55539E62703; // 0x10
	::FE06F3A7770EF42A* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE06F3A7770EF42A_F8199AC26AA5634F__CTOR_OFFSET))(this);
	}

	::System::Void A3B674B223C6A490(::A04FB906869DCF3A* F9ADA718944F49ED)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + FE06F3A7770EF42A_F8199AC26AA5634F_A3B674B223C6A490_OFFSET))(this, F9ADA718944F49ED);
	}
};
