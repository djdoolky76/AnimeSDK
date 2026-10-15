#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJMHBEAAOOC;
namespace System { class Object; }

#define NJMHBEAAOOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4D380)
#define NJMHBEAAOOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4D3C0)
#define NJMHBEAAOOC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB4D3D0)

	class NJMHBEAAOOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMHBEAAOOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC___C_CTOR_OFFSET))(this);
		}

		::NJMHBEAAOOC* __cctor_b__23_0()
		{
			return ((::NJMHBEAAOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMHBEAAOOC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
