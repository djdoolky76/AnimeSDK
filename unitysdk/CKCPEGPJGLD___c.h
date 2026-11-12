#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCPEGPJGLD;
namespace System { class Object; }

#define CKCPEGPJGLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3BBDE0)
#define CKCPEGPJGLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BBE20)
#define CKCPEGPJGLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3BBE30)

inline static constexpr unsigned int CKCPEGPJGLD___c_TypeDefinitionIndex = 33370;

	class CKCPEGPJGLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCPEGPJGLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD___C_CTOR_OFFSET))(this);
		}

		::CKCPEGPJGLD* __cctor_b__28_0()
		{
			return ((::CKCPEGPJGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
