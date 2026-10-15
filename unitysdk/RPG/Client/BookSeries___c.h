#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Book; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_BOOKSERIES___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8A86E0)
#define RPG_CLIENT_BOOKSERIES___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A8720)
#define RPG_CLIENT_BOOKSERIES___C__GETBOOKS_B__5_0_OFFSET UNITYSDK_OFFSET(0xC8A8730)
#define RPG_CLIENT_BOOKSERIES___C__GET_HASAUDIOCONTENT_B__53_0_OFFSET UNITYSDK_OFFSET(0xC8A87F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookSeries___c_TypeDefinitionIndex = 66379;

	class BookSeries___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::Book*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::Book*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x64690);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::Book*>, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::Book*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x64698);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x646A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBooks_b__5_0(::RPG::Client::Book* a1, ::RPG::Client::Book* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Book*, ::RPG::Client::Book*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C__GETBOOKS_B__5_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _get_HasAudioContent_b__53_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::Book*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::Book*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C__GET_HASAUDIOCONTENT_B__53_0_OFFSET))(this, a1);
		}

	};
}
