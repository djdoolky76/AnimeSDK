#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BPCHFOKFLAB_CTOR_OFFSET UNITYSDK_OFFSET(0xC19F8E0)
#define BPCHFOKFLAB_METHOD_1_OFFSET UNITYSDK_OFFSET(0xC19F4C0)
#define BPCHFOKFLAB_METHOD_2_OFFSET UNITYSDK_OFFSET(0xC19F540)
#define BPCHFOKFLAB_METHOD_3_OFFSET UNITYSDK_OFFSET(0xC19F6A0)
#define BPCHFOKFLAB_METHOD_4_OFFSET UNITYSDK_OFFSET(0xC19F760)
#define BPCHFOKFLAB_METHOD_5_OFFSET UNITYSDK_OFFSET(0xC19F820)
#define BPCHFOKFLAB_METHOD_6_OFFSET UNITYSDK_OFFSET(0xC19F880)
#define BPCHFOKFLAB_METHOD_OFFSET UNITYSDK_OFFSET(0xC19F380)

	class BPCHFOKFLAB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCHFOKFLAB_CTOR_OFFSET))(this);
		}

		static ::System::Void Method_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BPCHFOKFLAB_METHOD_OFFSET))(a1);
		}

		static ::System::Void Method_2_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BPCHFOKFLAB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Void Method_3_2(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BPCHFOKFLAB_METHOD_2_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* Method_4_3()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + BPCHFOKFLAB_METHOD_3_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* Method_5_4()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + BPCHFOKFLAB_METHOD_4_OFFSET))();
		}

		static ::System::Void Method_6_5()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCHFOKFLAB_METHOD_5_OFFSET))();
		}

		static ::System::Void Method_7_6()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCHFOKFLAB_METHOD_6_OFFSET))();
		}

	};
