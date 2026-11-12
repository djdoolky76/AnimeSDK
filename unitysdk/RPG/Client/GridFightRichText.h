#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GMEDAMAOAIN;
class NCFDMBOBAGN;
namespace RPG::Client { class GridFightRichTextNodeCompiler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTRICHTEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC46B30)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET UNITYSDK_OFFSET(0xDC46250)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET UNITYSDK_OFFSET(0xDC46430)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET UNITYSDK_OFFSET(0xDC46630)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET UNITYSDK_OFFSET(0xDC46830)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET UNITYSDK_OFFSET(0xDC46970)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET UNITYSDK_OFFSET(0xDC46550)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_7_OFFSET UNITYSDK_OFFSET(0xDC46750)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_8_OFFSET UNITYSDK_OFFSET(0xDC46A40)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_9_OFFSET UNITYSDK_OFFSET(0xDC46360)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC46B20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRichText_TypeDefinitionIndex = 67076;

	class GridFightRichText : public ::System::Object
	{
	public:
		static ::GMEDAMAOAIN** StaticGet__Parser()
		{
			return (::GMEDAMAOAIN**)UnitySDK::FromName("RPG.Client", "GridFightRichText")->GetStaticField(0x9940);
		}

		static ::NCFDMBOBAGN** StaticGet__Compiler()
		{
			return (::NCFDMBOBAGN**)UnitySDK::FromName("RPG.Client", "GridFightRichText")->GetStaticField(0x9948);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_CCTOR_OFFSET))();
		}

		static ::System::String* Compile_1(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_2(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::RPG::Client::GridFightRichTextNodeCompiler* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::Client::GridFightRichTextNodeCompiler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_3(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRichTextNodeCompiler*>* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRichTextNodeCompiler*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_4(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::Il2CppArray<::RPG::Client::GridFightRichTextNodeCompiler*>* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::Client::GridFightRichTextNodeCompiler*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_5(::RPG::Client::TextID a1)
		{
			return ((::System::String*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET))(a1);
		}

		static ::System::String* Compile_6(::System::String* a1, ::RPG::Client::GridFightRichTextNodeCompiler* a2)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::Client::GridFightRichTextNodeCompiler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_7(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRichTextNodeCompiler*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRichTextNodeCompiler*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_7_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_8(::System::String* a1, ::Il2CppArray<::RPG::Client::GridFightRichTextNodeCompiler*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::RPG::Client::GridFightRichTextNodeCompiler*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_8_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_9(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_9_OFFSET))(a1);
		}

	};
}
